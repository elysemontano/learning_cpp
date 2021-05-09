#include<iostream>
using namespace std;

int main(){

    bool bvalue = true;
    bool bvalue2 = false;

    //0 === true
    //1 === false
    cout << bvalue << endl;
    cout << bvalue2 << endl;

    // char represents single characters from ASCII
    char cValue = 55;
    char cValue2 = '7';
    cout << cValue << endl;
    cout << cValue2 << endl;
    //find ASCII value
    cout << (int)cValue << endl;

    // wchar_t represents greater range of characters in char
    wchar_t wValue = 'i';
    cout << wValue << endl;

    return 0;
}
