#pragma once
#define SIZE 2
#include "User.h"
#include "product.h"
#include "inquiry.h"
#include "feedback.h"
#include <cstring>
using namespace std;

class Seller : public User
{
  private:
    char seller_ID[20];
    char seller_Name[50];
    char seller_Email[50];
    Inquiry *inquiry[SIZE];
    Product * products[SIZE];
    Feedback *feedbacks[SIZE];
  public:
    Seller(){
      strcpy(seller_ID, "");
      strcpy(seller_Name, "");
      strcpy(seller_Email, "");
      
    }
    Seller(char uName[], char uPassword[], char s_ID[], char s_Name[], char s_Email[]) : User (uName, uPassword) {
      strcpy(seller_ID, s_ID);
      strcpy(seller_Name,s_Name);
      strcpy(seller_Email, s_Email);
    }
    void manageStore(){
      cout << "Managing listings..." << endl;
    }
    void addProducts(char pId[], char product_Name[], char pDescription[], double pPrice, int pQuantity){
      products[0] = new Product( pId, product_Name, pDescription, pPrice, pQuantity);
    }
    void displayProducts() {
      products[0]->displayProduct();
    }
    void display() {
      cout << "Display Seller Details" << endl;
      User::display();
      cout << seller_ID << endl <<  seller_Name << endl << seller_Email;
    }
    ~Seller(){
    cout << "Destuctor of Seller class called" << endl;
  }
};