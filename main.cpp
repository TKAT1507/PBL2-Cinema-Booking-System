#include <iostream>
#include "include/dataStructures/DynamicArray.h"
#include "include/khongbietdattengi/IDGenerator.h"

using namespace std;

int main()
{
    DynamicArray<string> ids;

    ids.push_back("CUS001");
    ids.push_back("CUS002");
    ids.push_back("CUS005");

    cout << IDGenerator::generateID("CUS", ids);

    return 0;
}