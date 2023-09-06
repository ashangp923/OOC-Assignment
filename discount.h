#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Discount
{
private:
  char discount_ID[20];
  double discountAmount;
public:
  Discount() {
     strcpy(discount_ID, "");
     discountAmount = 0;
  }
  Discount(char dID[], double dAmount ) {
    strcpy(discount_ID, dID);
    discountAmount = dAmount;
  }
  double getDiscountAmount() {
    return discountAmount;
  }
  void displayDiscount() {
    cout << "Display Discount Details" << endl;
    cout << discountAmount << endl;
  }
  ~Discount() {
    cout << "Destuctor of Discount class called" << endl;
  }
  

};
  