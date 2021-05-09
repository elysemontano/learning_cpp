#include <iostream>
using namespace std;

int main () {

    string text = "Hello ";
    // << = insertion operator
    // >> = extraction operator gets input from user
    cout << text << endl;
    cout << "Enter your name: " << flush;

    //declaring input variable with no value
    string input;
    // cin >> allows user to enter value into terminal
    cin >> input;
    cout << text << input << endl;

    cout << "Enter a number:" << flush;
    int value;
    cin >> value;
    cout << "You entered: " << value << endl;

    return 0;
}