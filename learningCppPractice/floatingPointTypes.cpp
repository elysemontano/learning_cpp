#include<iostream>
//allows fixed float
#include <iomanip>
using namespace std;

int main(){

    float fvalue = 3.14;

    //fixed gives more decimals
    cout << fixed << fvalue << endl;

    //scientific extends decimals even more
    cout << scientific << fvalue << endl;

    // more precise decimals
    cout << setprecision(20) << fixed << fvalue << endl;

    //double allows even more
    double dValue = 76.4;
    cout << setprecision(20) << fixed << dValue << endl;

    // long double can do even longer digits

    return 0;
}