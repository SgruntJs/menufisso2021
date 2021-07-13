import { Component, EventEmitter, OnInit, Output } from '@angular/core';
import { Post } from '../../models/post';
import { PostService } from '../../services/post/post.service';

@Component({
  selector: 'app-post-list',
  templateUrl: './post-list.component.html',
  styleUrls: ['./post-list.component.scss'],
})
export class PostListComponent implements OnInit {
  posts: Post[];
  loading = false;
  selectedPost: Post;
  tcode: string;
  c: any;
  config: any;

  constructor(private postSrv: PostService) {
    let currentPage = localStorage.getItem('currentPage');
    this.config = {
      currentPage: currentPage ? currentPage : 1,
      itemsPerPage: 6,
    };
  }

  ngOnInit(): void {
    this._getPosts();
  }

  pageChange(newPage: any, e: Event) {
    localStorage.setItem('currentPage', newPage);
    this.config.currentPage = newPage;
    console.log('newPage', newPage);
    e.preventDefault();
  }

  public _getPosts() {
    this.loading = true;
    this.postSrv.getPosts().subscribe(
      (res) => {
        this.posts = res;
        this.loading = false;
        // creo un array di id usando il metodo .map()
        // this.items = this.data.map( resp => resp.id);
        console.log(res);
      },
      (err) => {
        // this.errorHandler.handleError( err );
        this.loading = false;
      }
    );
  }
  // onSelectPost(post: Post): void {
  //   this.selectedPost = post;
  //   console.log('selected post', post.title);
  // }

  onSearchPost(e: Event): void {
    const key = this.tcode;
    this.postSrv.getPosts(key).subscribe((res) => {
      this.posts = res;
    });

    e.preventDefault();
  }

  onSelectedFilter(e) {
    this.onSearchPost(e);
    console.log('event', e);
  }

  dataFromChild;
  eventFromChild(data) {
    this.dataFromChild = data;
  }
}
