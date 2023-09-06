#pragma once
#include <cstring>
#include <iostream>
using namespace std;

class Order;
class Payment 

{
  protected:
    char payment_ref[30];
    double amount;
    Order *o;
  public:
    Payment() { 
      strcpy(payment_ref, "");
      amount = 0;
     }
    Payment(char pPayment_ref[], double pAmount) {
      strcpy(payment_ref,pPayment_ref );
      amount = pAmount;
    }
    void validatePayment() {};
    void viewPayDetails() {
      cout << "Display Payment Details:" << endl;
      cout << payment_ref << endl;
      cout << amount << endl;
    } ; 
    ~Payment() {
    cout << "Destuctor of Payment class called" << endl;
  }
};
