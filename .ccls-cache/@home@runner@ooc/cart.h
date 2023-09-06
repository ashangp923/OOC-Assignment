#pragma once
#include <iostream>
#include "product.h"
#include "buyer.h"
#include <cstring>
using namespace std;

class Cart {
  private:
    char cart_ID[20];
    int quantity;
    char create_Date[20];
    Product *product;
  public:
    Cart() {
      strcpy(cart_ID, "");
      strcpy(create_Date, "");
      quantity = 0;
    };
    Cart(char cId[], int pQuantity, char pCreateDate[]) {
      strcpy(cart_ID, cId);
      quantity = pQuantity;
      strcpy(create_Date, pCreateDate);
    };
    void calTotalCost() {};
    void updateQuantity() {};
    void showCart() {
      cout << "Display Cart Details" << endl;
      cout << cart_ID << endl << quantity << endl << create_Date 
      <<endl;
    };
    ~Cart(){
      cout << "Destuctor of Cart class called" << endl;
    }
};