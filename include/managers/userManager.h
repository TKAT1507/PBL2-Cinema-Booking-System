
#ifndef USERMANAGER_H
#define USERMANAGER_H

#include "Customer.h"
#include "Cashier.h"
#include "Admin.h"
#include "DynamicArray.h"

class UserManager {
private:
    DynamicArray<Customer> customers;
    DynamicArray<Cashier> cashiers;
    DynamicArray<Admin> admins;

public:
    bool taiKhoanExists(const std::string& taiKhoan);

    bool dangKy(
        const std::string& taiKhoan,
        const std::string& matKhau,
        const std::string& soDienThoai,
        int tuoi,
        const std::string& ten
    );

    int dangNhap(
        const std::string& taiKhoan,
        const std::string& matKhau,
        std::string& role,
        std::string& idOut
    );

    bool doiMatKhau(
        const std::string& taiKhoan,
        const std::string& matKhauCu,
        const std::string& matKhauMoi
    );

    Customer* findCustomerById(const std::string& maKH);

    Cashier* findCashierById(const std::string& maNV);

    Admin* findAdminById(const std::string& maQL);

    DynamicArray<Customer>& getCustomers();

    DynamicArray<Cashier>& getCashiers();

    DynamicArray<Admin>& getAdmins();

    // Đọc/Ghi file
    //void loadAll();

    //void saveAll();
};

#endif