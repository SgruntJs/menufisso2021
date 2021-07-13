import { Component, Input, OnInit } from '@angular/core';
import { Post } from 'src/app/models/post';
import { PostService } from 'src/app/services/post/post.service';
import { EventEmitter, Output } from '@angular/core';

@Component({
  selector: 'app-search-form',
  templateUrl: './search-form.component.html',
  styleUrls: ['./search-form.component.scss']
})
export class SearchFormComponent implements OnInit {
  tcode : string;
  posts: Post[];
  @Output() onClickButton = new EventEmitter();
  @Input() dataFromParent: String;
  @Output() sendDataToParent = new EventEmitter<string>();

  constructor(private postSrv: PostService) { }

  ngOnInit(): void {
    console.log('This is data from parent', this.dataFromParent);
  }

  _sendDataToParent(data:string) {
    this.sendDataToParent.emit(data);
  }

}
