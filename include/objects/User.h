#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

class User{ 
private:
    string taiKhoan;
    string matKhau;
    string soDienThoai;
    int Tuoi;
    string Ten;
    string vaiTro;
public:
    User();
    User(string tk,string mk,string sdt,int tuoi,string ten,string vaiTro);
    User(const User& other);
    ~User();
    string getTaiKhoan();
    string getMatKhau();
    string getSDT();
    int getTuoi();
    string getTen();
    string getRole();
    void setTaiKhoan(const string&tk);
    void setMatKhau(const string&mk);
    void setSDT(const string&SDT);
    void setTuoi(const int&tuoi);
    void setTen(const string&ten);
    void setRole(const string&role);
};


#endif
