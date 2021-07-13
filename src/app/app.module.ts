import { BrowserModule } from '@angular/platform-browser';
import { NgModule } from '@angular/core';
import { HttpClientModule } from '@angular/common/http';
import { AppRoutingModule } from './app-routing.module';
import { AppComponent } from './app.component';
import { HomeComponent } from './components/home/home/home.component';
import { PostListComponent } from './components/post-list/post-list.component';
import { PostItemComponent } from './components/post-item/post-item.component';
import { PostDetailComponent } from './components/post-detail/post-detail.component';
import { HeaderComponent } from './components/header/header.component';
import { NgxPaginationModule } from 'ngx-pagination';
import { SearchFormComponent } from './components/search-form/search-form.component';
@NgModule({
  declarations: [
    AppComponent,
    HomeComponent,
    PostListComponent,
    PostItemComponent,
    PostDetailComponent,
    HeaderComponent,
    SearchFormComponent
  ],
  imports: [
    BrowserModule,
    AppRoutingModule,
    HttpClientModule,
    NgxPaginationModule
  ],
  providers: [],
  bootstrap: [AppComponent]
})
export class AppModule { }
