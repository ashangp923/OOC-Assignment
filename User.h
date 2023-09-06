#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class User {
    protected:
      char userName[30];
      char password[20];
    public:
      User() {
        strcpy(userName, "");
        strcpy(password, "");
      }
      User(char uName[], char uPassword[]) {
        strcpy(userName,uName);
        strcpy(password,uPassword);
      }
      void login() {}
      void verifyUser() {}
      void display() {
        cout << userName << endl;
      }

    ~User(){
    cout << "Destuctor of User class called" << endl;
    }
};