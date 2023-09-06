#pragma once
#define SIZE 2
#include "User.h"
#include "order.h"
#include "cart.h"
#include "inquiry.h"
#include "feedback.h"
#include <cstring>
using namespace std;

class Buyer : public User
{
  private:
    char buyer_ID[20];
    char buyer_Name[50];
    char buyer_Email[30];
    Order *order[SIZE];
    Cart *cart;
    Inquiry *inquiry[SIZE];
    Feedback *feedbacks[SIZE];

  public:
     Buyer() {
        strcpy(buyer_ID, "");
        strcpy(buyer_Name, "");
        strcpy( buyer_Email, "");
     }
     Buyer(char uName[], char uPassword[], char bId[], char 
     bName[], char bEmail[]) : User (uName, uPassword) {
        strcpy(buyer_ID, bId);
        strcpy(buyer_Name, bName );
        strcpy( buyer_Email, bEmail);
     }
     void placeOrder(char o_ID[], char pName[], char pDate[]) {
       order[0] = new Order( o_ID, pName, pDate); 
     }
     void displayOrder() {
       order[0]->viewOrder();
     }
     void cancelOrder();
     void addFeedback(char f_ID[], char u_ID[], char p_ID[],int f_rating, char f_Comments[]){
       feedbacks[0] = new Feedback(f_ID , u_ID, p_ID, f_rating, f_Comments);
     }
     void dispalyFeed() {
       feedbacks[0]->viewFeedback();
     }
  
     void addInquiry(char i_ID[], char i_Cname[], char i_Date[], char i_Status[]) {
       inquiry[0] = new Inquiry(i_ID , i_Cname, i_Date, i_Status);
     }
     void displayInq() {
       inquiry[0]->displayInquiry();
     }
     void editProfile();
     void addCart(char cId[], int pQuantity, char pCreateDate[]) {
       cart = new Cart(cId, pQuantity, pCreateDate);
     }
     void displayCarts() {
       cart->showCart(); 
     }
    void display() {
      cout << "Display Buyer Details:" << endl;
      User::display();
      cout << buyer_ID << endl << buyer_Name << endl << buyer_Email << endl;
    }
~Buyer(){
  cout << "Destuctor of Buyer class called" << endl;
}
};