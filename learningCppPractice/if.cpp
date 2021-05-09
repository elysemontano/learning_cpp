#include <iostream>
using namespace std;

int main(){
    
    string password = "hello"; 

    cout << "Password: " << flush;
    string input; 

    cin >> input;
    //check input
    //cout << "'" << input << "'" << endl;


    //if statement only evaluates if condition is true
    if(input == password) {
        cout << "Password accepted" << endl;
    }

    if(input != password) {
        cout << "Password denied" << endl;
    }

    return 0;
}