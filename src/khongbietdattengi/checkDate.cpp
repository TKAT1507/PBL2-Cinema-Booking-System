#include "checkData.h"
#include <cctype>
using namespace std;

bool checkData :: isValidUsename  ( const string & name){
    if ( name.length()<4 || name.length()>10) return false;
    for ( int i = 0; i< name.length() ;i++ ){
        if (!(name[i] >= 'a' && name[i] <= 'z') && !(name[i] >= 'A' && name[i] <= 'Z') && !(name[i] >= '0' && name[i] <= '9')) {
            return false; 
        }
    }
    return true;
}

bool checkData :: isValidPassword( const string & pass){
    if ( pass.length() != 6) return false;
    for ( int i = 0 ; i < 6;i++){
        if (!(pass[i] >= 'a' && pass[i] <= 'z') && !(pass[i] >= 'A' && pass[i] <= 'Z') && !(pass[i] >= '0' && pass[i] <= '9')) {
            return false; }
    }
    return true;
}


bool checkData :: isValidDate ( const string & date)
{

    if (date.length() != 10 || date[2] != '/' || date[5] != '/') return false;
    for ( int i = 0 ; i < 10 ;i++){
        if ( i !=2 && i!=5){
        if ( date[i]<'0' || date [i]>'9'){
            return false;
        }}
    }
    int day = (date[0] - '0') * 10 + (date[1] - '0');
    int month = (date[3] - '0') * 10 + (date[4] - '0');
    int year = (date[6] - '0') * 1000 + (date[7] - '0') * 100 + (date[8] - '0') * 10 + (date[9] - '0');
    
    if (year < 1900 || year > 2100) return false;
    if (month < 1 || month > 12) return false;
    if (day < 1 || day > 31) return false; // Làm sơ bộ kiểm tra <= 31 ngày cho khỏe
    
    return true;
}

bool checkData :: isValidAge( const int & age)
{
    return age >= 0 && age <= 120;
}

bool checkData :: isValidPrice ( const double &price)
{
    return price >= 0 ; 
}
bool checkData :: isValidPhone ( const string &phone)
{
    if ( phone.length()!=10 ) return false;
    else if ( phone[0] != '0' ) return false;
    for ( int i = 0; i < 10 ; i ++ ){
        if ( phone[i] <'0' || phone [i]>'9') return false;
    }
    return true;
}

bool checkData :: isValidTime ( const string & time )
{
    if ( time.length() != 5 || time[2] != ':' ) return false;

    if ( time[0] < '0' || time[0] > '9' || time[1] < '0' || time[1] > '9' ||
         time[3] < '0' || time[3] > '9' || time[4] < '0' || time[4] > '9' ) {
        return false;
    }

    int hour = (time[0] - '0') * 10 + (time[1] - '0');
    int minute = (time[3] - '0') * 10 + (time[4] - '0');

    if ( hour < 0 || hour >= 24 || minute < 0 || minute >= 60 ) {
        return false;
    }

    return true;
}

bool checkData :: isNotEmty (const string &data)
{   
    return data.length() > 0;

}

void checkData::trim(string &data) {
    size_t start = data.find_first_not_of(" \t\n\r");
    if (start == string::npos) {
        data = "";
        return;
    }
    size_t end = data.find_last_not_of(" \t\n\r");
    
    data = data.substr(start, end - start + 1); 
}
