#include<iostream>
using namespace std;

int main()
{
    const string password = "hello";

     string input;

    do {
        cout << "Enter Password" << flush;
        cin >> input;

        if(input == password) {
            break;
        }
        else {
            cout << "Password Incorrect" << endl;
        }
    } while(true);
    //while ^ this is true -- do condition will repeat until break
    //once false -- will end loop

    cout << "Confirmed" << endl;

   return 0;
}