#include<iostream>
using namespace std;

int main(){
    
    // \t is a tab over, you can also add \"" to add internal quotes
    cout << "1. \tAdd new record" << endl;
    cout << "2. \tDelete record" << endl;
    cout << "3. \tSearch record" << endl;
    cout << "4. \tQuit" << endl;

    cout << "Enter your selection > " << flush;

    int value;
    cin >> value;

    if(value == 4) {
        cout << "Quitting..." << endl;
    } else if (value == 3){
        cout << "Search record" << endl;
    } else if (value == 2) {
        cout << "Delete record" << endl;
    } else if (value == 1) {
        cout << "Add new record" << endl;
    } else {
        cout << "Invalid selection" << endl;
    }

    return 0;
}