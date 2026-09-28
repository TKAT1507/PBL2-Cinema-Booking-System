#include "IDGenerator.h"
using namespace std;

string IDGenerator::extraNumber(const int & num)
{
    int nextNum = num + 1;
    if ( nextNum < 10 ) return "00" + to_string(nextNum);
    else if ( nextNum < 100 ) return "0" + to_string(nextNum) ;
    else return to_string(nextNum) ;
}

string IDGenerator::IDGen(const string & id)
{
    string idText ="";
    idText = id[0] + id[1];
    int num = 0 ; 
    for (int i = 2; i < id.length(); i++)
    {
        num = num*10 + (id[i]-'0');
    }
    string nextNum = extraNumber (num);
    return idText + nextNum;
    

}