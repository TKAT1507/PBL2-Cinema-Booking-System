#include "Admin.h"
using namespace std;

Admin::Admin():User(),maQuanLy(""){}
Admin::Admin(string tk,string mk,string sdt,int tuoi,string ten,string maQL):User(tk,mk,sdt,tuoi,ten,"Admin"),maQuanLy(maQL){}
Admin::Admin(const Admin&AD):User(AD){
    maQuanLy = AD.maQuanLy;
}
string Admin::getMa(){
    return maQuanLy;
}
void Admin::setMa(const string&maQL){
    maQuanLy = maQL;
}
