#include<iostream>
// allows INT_MAX and INT_MIN
#include <limits.h>
using namespace std;


int main()
{
    int value = -7777777;
    cout<< value << endl;

    //shows max and min integers
    cout << INT_MAX << endl;
    cout << INT_MIN << endl; 

    // long int lets you use a longer integer value
    //can also just use long
    long int lValue = 234987234987923497;
    long lValue2 = 2349897348297;
    cout << lValue <<endl;
    cout << lValue2 << endl;

    //can use short int for shorter integers if needing to reduce memory usage

    // sizeof(int) shows how many bits int takes
    cout << "Size of int: " << sizeof(int) << endl;
    cout << "Size of short int: " << sizeof(short int) << endl;
    cout << "Size of long int: " << sizeof(long int) << endl;

    // unsigned uses only positive numbers
    unsigned int uValue = 234566;

    return 0;
}
