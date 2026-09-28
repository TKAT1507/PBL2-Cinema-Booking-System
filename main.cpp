#include<iostream>
#include "IDGenerator.h"
using namespace std;

int main ()
{
    string id = "TK001";
    string nextID = IDGenerator::IDGen(id); 
    cout << nextID;

}