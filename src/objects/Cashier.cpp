#include "Cashier.h"
using namespace std;

Cashier::Cashier():User(),maNhanVien(""){}
Cashier::Cashier(string tk,string mk,string sdt,int tuoi,string ten,string maNV):User(tk,mk,sdt,tuoi,ten,"Cashier"),maNhanVien(maNV){}
Cashier::Cashier(const Cashier&NV):User(NV){
    maNhanVien = NV.maNhanVien;
}   
string Cashier::getMa(){
    return maNhanVien;
}
void Cashier::setMa(const string&maNV){
    maNhanVien = maNV;
}