#include "IDGenerator.h"
#include<string>
using namespace std;

string IDGenerator::generateID(const string & prefix, const DynamicArray<string> & exitIDs)
{
    //tim so lon nhat 
    int maxNum = 0 ; 
    for (int  i = 0; i < exitIDs.size(); i++)
    {
        int num = extractNum(exitIDs[i],prefix);
        if ( num > maxNum )
        {
            maxNum = num ; 
        }

    }
     
    //cong them 1
    int nextNum = maxNum + 1; 
    //dinh dang :
    string numStr;
    if(nextNum < 10 ) numStr = "00" + to_string(nextNum);
    else if(nextNum < 100 ) numStr = "0" + to_string(nextNum);
    else numStr = to_string(nextNum);

    //ghep thanh id
    string nextID = prefix + numStr;
    //return 
    return nextID;


}

int IDGenerator::extractNum(const string & id, const string & prefix)
{

    //kiem tra dinh dang cua num 
    if(id.length() <= prefix.length())
    {
    return 0;
    }
    if (id.substr(0,prefix.length()) != prefix ){
        return 0;
    }

    //Chuyen tu string sang int 
    int num = 0 ; 
    for (int i = prefix.length () ; i < id.length (); i++)
    {
        num = num * 10 + (id[i]-'0');

    }

    //return 
    return num ; 


}

