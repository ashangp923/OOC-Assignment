#pragma once
#include <iostream>
#include <cstring>
#include "discount.h"
using namespace std;

class Product {
private:
 char product_ID[20];
 char product_Name[50];
 char description[100];
 double price;
 int quantity;
public:
  Product() {
    strcpy(product_ID, "");
    strcpy(product_Name, "");
    strcpy(description, "");
    price = 0;
    quantity = 0;
  }
  Product(char pId[], char product_Name[], char pDescription[], double pPrice, int pQuantity) {
    strcpy(product_ID, pId);
    strcpy(product_Name, product_Name);
    strcpy(description, pDescription);
    price = pPrice;
    quantity = pQuantity;
    
  }
  void displayProduct() {
    cout << "Display Product Details" << endl;
    cout << product_ID << endl << product_Name << endl << description << endl << price << endl << quantity <<endl;
  }
  void addDiscount(double dprice, Discount *discount) {
    price = dprice - discount->getDiscountAmount();
  }

 ~Product(){
    cout << "Destuctor of Product class called" << endl;
  }
};