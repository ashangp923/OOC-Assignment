#pragma once
#define SIZE 2
#include "product.h"
#include <cstring>
using namespace std;

class Category {
  private:
    char category_ID[20];
    char name[50];
    Product *product[SIZE];
  public:
    Category() {
      strcpy(category_ID, "");
      strcpy(name, "");
    };
    Category(char cID[], char cName[]) {
      strcpy(category_ID,cID );
      strcpy(name, cName);
    };
    void viewCategory() {};
    void addProduct() {
      product[0] = new Product();
      product[1] = new Product();
    };

  ~Category(){
    cout << "Destuctor of Category class called" << endl;
  }
};