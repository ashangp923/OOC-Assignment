#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Seller;
class Inquiry{
  private:
    char inquiry_id[20];
    char customerName[50];
    char inquiry_date[20];
    char status[50];
    Seller *seller;
  public:
    Inquiry(){
      strcpy(inquiry_id, "");
      strcpy(customerName, "");
      strcpy(inquiry_date, "");
      strcpy(status, "");
    }
    Inquiry( char i_ID[], char i_Cname[], char i_Date[], char i_Status[] ){
      strcpy(inquiry_id, i_ID);
      strcpy(customerName, i_Cname);
      strcpy(inquiry_date, i_Date);
      strcpy(status, i_Status);
    }
    void displayInquiry() {
      cout << "Display Inquiry Details" << endl;
      cout << inquiry_id << endl << customerName << endl << inquiry_date << endl << status << endl;
    }
    ~Inquiry() {
    cout << "Destuctor of Inquiry class called" << endl;
  }
};