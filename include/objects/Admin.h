#ifndef ADMIN_H
#define ADMIN_H

#include "User.h"

#include <string>
using namespace std;
class Admin : public User{
private:
    string maQuanLy;
public:
    Admin();
    Admin(string tk,string mk,string sdt,int tuoi,string ten,string maQL);
    Admin(const Admin&AD);
    string getMa();
    void setMa(const string&maQL);


};

#endif