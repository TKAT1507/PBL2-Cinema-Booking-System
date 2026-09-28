#include <string>
class checkData {
    public:
    static bool isValidUsename ( const std::string &);
    static bool isValidPassword ( const std::string&);
    static bool isValidAge ( const int &); 
    static bool isValidPhone ( const std::string&); 
    static bool isValidDate( const std::string&);  
    static bool isValidTime ( const std::string&);
    static bool isValidPrice ( const double&);
    static bool isNotEmty ( const std::string&);
    void trim ( std::string &);

};