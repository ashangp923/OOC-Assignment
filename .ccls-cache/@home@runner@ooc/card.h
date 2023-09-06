#pragma once
#include "payment.h"
#include <cstring>
using namespace std;

class Card :  public Payment {
  private:
    char type[20];
    char name[30];
    char number[15];
    char expDate[10];
    int cvv;
  public:
    Card(){
      strcpy(type, "");
      strcpy(name, "");
      strcpy(expDate, "");
      strcpy(number, "");
      cvv = 0;
    };
    Card(char pPayment_ref[], double pAmount, char pType[], char pName[], char pNumber[], char pExpDate[], int pCvv) : Payment (pPayment_ref, pAmount) {
      strcpy(type, pType);
      strcpy(name, pName );
      strcpy(expDate, pExpDate );
      strcpy(number, pNumber);
      cvv = pCvv;
    };
    void validateCard();
    void displaycard() {
      cout << "Display Card Details" << endl;
      Payment::viewPayDetails();
      cout << type << endl << name << endl  << expDate << endl << number << endl;
    }

  ~Card(){
    cout << "Destuctor of Card class called" << endl;
  }
};