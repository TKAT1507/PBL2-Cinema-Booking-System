#include "Customer.h"

Customer::Customer():User(),maKhachHang(""){}
Customer::Customer(string tk,string mk,string sdt,int tuoi,string ten,string maKH):User(tk,mk,sdt,tuoi,ten,"Customer"),maKhachHang(maKH){}
Customer::Customer(const Customer&KH):User(KH){
    maKhachHang = KH.maKhachHang;
}
string Customer::getMa(){
    return maKhachHang;
}
void Customer::setMa(const string&maKH){
    maKhachHang = maKH;
}