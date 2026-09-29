#include "UserManager.h"
#include "FileManager.h"
#include "IDGenerator.h"

using namespace std;


bool UserManager::taiKhoanExists(
    const string& taiKhoan
) {
    for(int i = 0; i < customers.size(); i++) {
        if(customers[i].getTaiKhoan() == taiKhoan)
            return true;
    }

    for(int i = 0; i < cashiers.size(); i++) {
        if(cashiers[i].getTaiKhoan() == taiKhoan)
            return true;
    }

    for(int i = 0; i < admins.size(); i++) {
        if(admins[i].getTaiKhoan() == taiKhoan)
            return true;
    }

    return false;
}

bool UserManager::dangKy(
    const string& taiKhoan,
    const string& matKhau,
    const string& soDienThoai,
    int tuoi,
    const string& ten
) {
    if (taiKhoanExists(taiKhoan))
        return false;

    DynamicArray<string> existingIDs;

    for (int i = 0; i < customers.size(); i++) {
        existingIDs.push_back(customers[i].getMa());
    }

    Customer newCustomer;

    newCustomer.setTaiKhoan(taiKhoan);
    newCustomer.setMatKhau(matKhau);
    newCustomer.setSDT(soDienThoai);
    newCustomer.setTuoi(tuoi);
    newCustomer.setTen(ten);
    newCustomer.setRole("Customer");

    string maKH =
        IDGenerator::generateID("KH", existingIDs);

    newCustomer.setMa(maKH);

    customers.push_back(newCustomer);

    saveAll();
    return true;
}

int UserManager::dangNhap(
    const string& taiKhoan,
    const string& matKhau,
    string& role,
    string& idOut
) {
    for(int i = 0; i < customers.size(); i++) {

        if(customers[i].getTaiKhoan() == taiKhoan &&
           customers[i].getMatKhau() == matKhau) {

            role = customers[i].getRole();
            idOut = customers[i].getMa();

            return i;
        }
    }

    for(int i = 0; i < cashiers.size(); i++) {

        if(cashiers[i].getTaiKhoan() == taiKhoan &&
           cashiers[i].getMatKhau() == matKhau) {

            role = cashiers[i].getRole();
            idOut = cashiers[i].getMa();

            return i;
        }
    }

    for(int i = 0; i < admins.size(); i++) {

        if(admins[i].getTaiKhoan() == taiKhoan &&
           admins[i].getMatKhau() == matKhau) {

            role = admins[i].getRole();
            idOut = admins[i].getMa();

            return i;
        }
    }

    return -1;
}

bool UserManager::doiMatKhau(
    const string& taiKhoan,
    const string& matKhauCu,
    const string& matKhauMoi
) {

    for(int i = 0; i < customers.size(); i++) {

        if(customers[i].getTaiKhoan() == taiKhoan &&
           customers[i].getMatKhau() == matKhauCu) {

            customers[i].setMatKhau(matKhauMoi);

            saveAll();
            return true;
        }
    }

    for(int i = 0; i < cashiers.size(); i++) {

        if(cashiers[i].getTaiKhoan() == taiKhoan &&
           cashiers[i].getMatKhau() == matKhauCu) {

            cashiers[i].setMatKhau(matKhauMoi);

            saveAll();
            return true;
        }
    }

    for(int i = 0; i < admins.size(); i++) {

        if(admins[i].getTaiKhoan() == taiKhoan &&
           admins[i].getMatKhau() == matKhauCu) {

            admins[i].setMatKhau(matKhauMoi);

            saveAll();
            return true;
        }
    }

    return false;
}

Customer* UserManager::findCustomerById(
    const string& maKH
) {
    for(int i = 0; i < customers.size(); i++) {

        if(customers[i].getMa() == maKH)
            return &customers[i];
    }

    return nullptr;
}

Cashier* UserManager::findCashierById(
    const string& maNV
) {
    for(int i = 0; i < cashiers.size(); i++) {

        if(cashiers[i].getMa() == maNV)
            return &cashiers[i];
    }

    return nullptr;
}

Admin* UserManager::findAdminById(
    const string& maQL
) {
    for(int i = 0; i < admins.size(); i++) {

        if(admins[i].getMa() == maQL)
            return &admins[i];
    }

    return nullptr;
}

DynamicArray<Customer>& UserManager::getCustomers() {
    return customers;
}

DynamicArray<Cashier>& UserManager::getCashiers() {
    return cashiers;
}

DynamicArray<Admin>& UserManager::getAdmins() {
    return admins;
}