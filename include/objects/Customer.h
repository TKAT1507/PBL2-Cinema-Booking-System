#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "User.h"

#include <string>
using namespace std;
class Customer : public User{
private:
    string maKhachHang;
public:
    Customer();
    Customer(string tk,string mk,string sdt,int tuoi,string ten,string maKH);
    Customer(const Customer&KH);
    string getMa();
    void setMa(const string&maKH);


};

#endif