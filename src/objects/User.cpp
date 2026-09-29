#include "User.h"
using namespace std;

User::User():taiKhoan(""),matKhau(""),soDienThoai(""),Tuoi(0),Ten(""),vaiTro(""){
}
User::User(string tk,string mk,string sdt,int tuoi,string ten,string role):taiKhoan(tk),matKhau(mk),soDienThoai(sdt),Tuoi(tuoi),Ten(ten),vaiTro(role){ 
}
User::User(const User&other){
    taiKhoan = other.taiKhoan;
    matKhau = other.matKhau;
    soDienThoai = other.soDienThoai;
    Tuoi = other.Tuoi;
    Ten = other.Ten;
    vaiTro = other.vaiTro; 
}
User::~User(){
}
string User::getTaiKhoan(){
    return taiKhoan;
}
string User::getMatKhau(){
    return matKhau;
}
string User::getSDT(){
    return soDienThoai;
}
int User::getTuoi(){
    return Tuoi;
}
string User::getTen(){
    return Ten;
}
string User::getRole(){
    return vaiTro;
}
void User::setTaiKhoan(const string&tk){
    taiKhoan = tk;
}
void User::setMatKhau(const string&mk){
    matKhau = mk;
}
void User::setSDT(const string&SDT){
    soDienThoai = SDT;
}
void User::setTuoi(const int&tuoi){
    Tuoi = tuoi;
}
void User::setTen(const string&ten){
    Ten = ten;
}
void User::setRole(const string&role){
    vaiTro = role;
}
