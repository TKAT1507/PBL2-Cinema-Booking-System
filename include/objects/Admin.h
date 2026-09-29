#ifndef ADMIN_H
#define ADMIN_H

#include "User.h"

#include <string>
using namespace std;
class Admin : public User{
private:
    string maQuanLy;
public:
    void getMa();

};

#endif