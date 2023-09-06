#pragma once
#define SIZE 2
#include <iostream>
#include <cstring>
#include "payment.h"
#include "product.h"
using namespace std;

class Buyer; 
class Order {
  private:
    char order_ID[20];
    char name[30];
    char date[20];
    Buyer *buyer;
    Payment *payment;
    Product *product[SIZE];
  public:
    Order() {
      strcpy(order_ID, "");
      strcpy(name, "");
      strcpy(date, "");
    };
    Order(char o_ID[], char pName[], char pDate[]) {
      strcpy(order_ID, o_ID);
      strcpy(name, pName);
      strcpy(date, pDate);
    };
    void calcTotalAmount();
    void viewOrder() {
      cout << "Display Order Details" << endl;
      cout << order_ID << endl << name << endl << date <<endl;
    }
    void placeOrder(Product *p1, Product *p2) {
      product[0] = p1;
      product[1] = p2;
    
    }
   ~Order(){
    cout << "Destuctor of Order class called" << endl;
  }
};
