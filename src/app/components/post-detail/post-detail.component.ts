import { Component, OnDestroy, OnInit } from '@angular/core';
import { ActivatedRoute } from '@angular/router';
import { Post } from '../../models/post';
import { tap } from "rxjs/operators";
import { PostService } from '../../services/post/post.service';
import { Subscription } from 'rxjs';
import {Location} from '@angular/common';

@Component({
  selector: 'app-post-detail',
  templateUrl: './post-detail.component.html',
  styleUrls: ['./post-detail.component.scss']
})
export class PostDetailComponent implements OnInit, OnDestroy {
  posts: Post [];
  id: any;
  singlePost: any;
  private subscription: Subscription;


  constructor(
    private activatedRoute: ActivatedRoute,
    private postSrv: PostService,
    private _location: Location) {
      this.postSrv.getPosts().subscribe(
        res => {
          this.posts = res;
        });
  } 

  ngOnInit(): void {
    
    this.subscription = this.activatedRoute.paramMap.pipe(
      tap(params => {
    console.log('params detail', params.keys)
    this.postSrv.getSinglePost(+params.get('id')).subscribe(res => this.singlePost = res);
    console.log('detail single post', this.singlePost);
      })
    ).subscribe();
    
  }

  ngOnDestroy() {
    this.subscription.unsubscribe();
  }

  backClicked() {
    this._location.back();
  }

}