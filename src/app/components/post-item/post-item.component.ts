import { Component, EventEmitter, Input, OnInit, Output } from '@angular/core';
import { Router } from '@angular/router';
import { Post } from '../../models/post';

@Component({
  selector: 'app-post-item',
  templateUrl: './post-item.component.html',
  styleUrls: ['./post-item.component.scss']
})
export class PostItemComponent implements OnInit {
  @Input() postItem: Post;
  @Input() index: number;

  

  constructor(private router: Router) { }


  ngOnInit(): void {
    console.log('post item',this.postItem);
  }




}
