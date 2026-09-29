#ifndef CASHIER_H
#define CASHIER_H

#include "User.h"

#include <string>
using namespace std;
class Cashier : public User{
private:
    string maNhanVien;
public:
    Cashier();
    Cashier(string tk,string mk,string sdt,int tuoi,string ten,string maNV);
    Cashier(const Cashier&NV);
    string getMa();
    void setMa(const string&maNV);


};

#endif