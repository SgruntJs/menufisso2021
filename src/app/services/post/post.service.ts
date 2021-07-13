import { Injectable } from '@angular/core';
import { Endpoint } from '../http/endpoint.enum';
import { HttpClient } from '@angular/common/http';
import { Post } from '../../models/post';
import { Observable } from 'rxjs';
import { map } from 'rxjs/operators';

@Injectable({
  providedIn: 'root'
})
export class PostService {

  post: Post[];

  constructor(private http: HttpClient) { }


  public _getPosts(): Observable<Post[]> {
    return this.http.get<Array<Post>>(`${Endpoint.POST}`);
  }

  public getSinglePost(postId: number): Observable<Post> {
    console.log('postId detail', postId);
    return this._getPosts().pipe(
      map(posts => posts.find(res => res.id === postId)));

   }

   public getPosts(key?: string): Observable<Post[]> {
    console.log('parola cercata:', key);
    return key ? this._getPosts().pipe(
      map(posts => posts.filter(res => res.body?.includes(key))
      )) : this._getPosts();
        
   }

  
}
