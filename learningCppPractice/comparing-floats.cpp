#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float value = 2.14;
    // this comes back as not equal since 2.14 is ACTUALLY 2.14.....(fill in the numbers)
    if(value == 2.14) {
        cout << "equals" << endl;
    }
    else{
        cout << "not equal" << endl;
    }

    //to make the statement true, we need to be more precise
    if(value < 2.145 && value > 2.13) {
        cout << "exquals" << endl;
    }
    else {
        cout << "not equal" << endl;
    }
    return 0;
}