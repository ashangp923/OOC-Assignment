#pragma once
#include <iostream>
#include <cstring>
#include "seller.h"
#include "product.h"
using namespace std;
class Administrator; //forward declaration

class Feedback{
  private:
    char feed_ID[20];
    char user_ID[20];
    char product_ID[20];
    int rating;
    char comments[100];
    Administrator *admin;
    Seller *seller;
    Product *product;

  public:
    Feedback(){
      strcpy(feed_ID, "");
      strcpy(user_ID, "");
      strcpy(product_ID, "");
      strcpy(comments, "");
      rating =0;
      
    }
    Feedback( char f_ID[], char u_ID[], char p_ID[],int f_rating, char f_Comments[]) {
      strcpy(feed_ID, f_ID);
      strcpy(user_ID,  u_ID);
      strcpy(product_ID, p_ID);
      strcpy(comments, f_Comments);
      rating =  f_rating;
    }
    void displayDetails() {};
    void viewFeedback() {
      cout << "Display Feedback Details:" << endl;
      cout << feed_ID << endl << user_ID << endl << product_ID << endl << rating << endl << comments << endl;
    }
    void viewRating() {}
    ~Feedback(){
    cout << "Destuctor of Feedback class called" << endl;
  }
};