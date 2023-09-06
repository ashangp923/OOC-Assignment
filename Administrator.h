#pragma once
#define SIZE 2
#include <cstring>
#include "User.h"
using namespace std;

class Feedback; //forward declaration
class Administrator :public User
{
private:
  char admin_ID[20];
  Feedback *feedbacks[SIZE];
public:
  Administrator() {
    strcpy(admin_ID, "");
  }
  Administrator(char uName[], char uPassword[], char aID[]) : User(uName, uPassword)  {
    strcpy(admin_ID, aID);
  }
  void displayAdminDetails() {
    cout << "Display Administrator Details" << endl;
    User::display();
    cout << admin_ID  << endl;
  }
  void manageReports() {
     cout << "Managing reports..." << endl;
  }
  void managePaymentMethod() {
    cout << "Managing payment methods..." << endl;
  }
  void manageUser() {
    cout << "Managing users..." << endl;
  }
  void manageFeedback() {
    cout << "Managing feedback..." << endl;
  }
  void manageListing() {
    cout << "Managing listings..." << endl;
  }
  ~Administrator(){
    cout << "Destuctor of Admin class called" << endl;
  }
};