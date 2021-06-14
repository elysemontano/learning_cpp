#include<iostream>
using namespace std;

int main(){

    int value = 3;

    switch(value) {
    case 1:
        cout << "Value is 1" << endl;
        break;
    case 2:
        cout << "Value is 2" << endl;
        break;
    case 3:
        cout << "Value is 3" << endl;
        break;
    default: 
        cout << "Not Valid" << endl;
    }

    return 0;
}