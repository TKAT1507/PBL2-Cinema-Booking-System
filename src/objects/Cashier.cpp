#include "Cashier.h"
using namespace std;

Cashier::Cashier():User(),maKhachHang(""){}
Cashier::Cashier(string tk,string mk,string sdt,int tuoi,string ten,string maNV):User(tk,mk,sdt,tuoi,ten,"Cashier"),maKhachHang(maNV){}
Cashier::Cashier(const Cashier&NV):User(NV){
    maKhachHang = NV.maKhachHang;
}   
string Cashier::getMa(){
    return maKhachHang;
}
void Cashier::setMa(const string&maNV){
    maKhachHang = maNV;
}