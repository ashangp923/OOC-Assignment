//main cpp

#include <iostream>
#include <cstring>
#include "User.h"
#include "Administrator.h"
#include "buyer.h"
#include "seller.h"
#include "inquiry.h"
#include "cart.h"
#include "feedback.h"
#include "category.h"
#include "order.h"
#include "payment.h"
#include "card.h"
#include "discount.h"
#include "product.h"
using namespace std;

int main() {

  //insert to buyer
  Buyer *buyer= new Buyer( (char *) "Nimal", (char *) "nimal123", (char *) "B0001", (char *) "Nimal Kavinda", (char *) "nimal@gmail.com");
  buyer->display();
  cout << endl << endl;

  //insert to seller
  Seller *seller= new Seller( (char *) "Uwasara", (char *) "uwasara123", (char *) "S0001", (char *) "Uwasara", (char *) "uwa@gmail.com");
  seller->display();
  cout << endl << endl;

  //insert to Administrator
  Administrator *admin = new Administrator( (char*) "Heshan", (char*) "heshan123", (char*) "A01");
  admin->displayAdminDetails();
  cout << endl << endl;

  //insert to inquiry
  Buyer *inq;
  inq = new Buyer;
  inq->addInquiry((char *) "I0001", (char *) "Nimal", (char *) "2023/06/27", (char *) "Pending" );
  inq->displayInq();
  cout << endl << endl;

  //insert to feedback
  Buyer * feed;
  feed = new Buyer();
  feed->addFeedback((char *) "F0001", (char *) "B0001", (char *) "P0001", 4, (char *) "Good product" );
  feed->dispalyFeed();
  cout << endl << endl;

  //insert to cart
  Buyer * cart;
  cart = new Buyer();
  cart->addCart((char *) "CA0001", 2, (char *) "2023/06/25");
  cart->displayCarts();
  cout << endl; 

  //insert to discount
  Discount *discount = new Discount((char *) "D0001",  1000 );
  discount->displayDiscount();
  cout<< endl << endl;

  //insert to product
  Seller * product;
  product = new Seller;
  product->addProducts((char *) "PR0001", (char *) "Lenovo Laptop", (char *) "Lenovo IdeaPad Slim 3 – 14ALC6", 294000,  1);
  product->displayProducts();
  cout << endl << endl;

  //insert to order
  Buyer *order;
  order = new Buyer;
  order->placeOrder((char *) "Od0001", (char *) "Mobile Phone", (char *) "2023/06/27" );
  
  order->displayOrder();
  cout << endl << endl;

  //insert to payment
  Payment *pay = new Payment((char*)"P0001", 2000);
  pay->viewPayDetails();
  cout << endl << endl;

  //Delete dynamic memory allocations
  delete admin;
  delete buyer;
  delete seller;
  delete pay; 
  delete order;
  delete product;
  delete discount;
  delete cart;
  delete feed;
  delete inq;

  return 0;
}