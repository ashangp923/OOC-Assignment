#pragma once
#define SIZE 2
#include "User.h"
#include "feedback.h"

class Administrator :public User
{
private:
  char admin_ID[20];
  Feedback *feedback[SIZE];
public:
  Administrator() {}
  Administrator(char uName[], char uPassword[], char aID[]) : User(uName, uPassword)  {}
  void displayAdminDetails() {}
  void manageReports() {}
  void managePaymentMethod() {}
  void manageUser() {}
  void manageFeedback() {}
  void manageListing() {}
};