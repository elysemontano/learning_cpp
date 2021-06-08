#include<iostream>
using namespace std;

int main()
{
    const string password = "hello";

     string input;

    do {
        cout << "Enter Password" << flush;
        cin >> input;

        if(input != password) {
            cout << "Password Incorrect" << endl;
        }
    } while(input != password);
    //while ^ this is true -- do condition will repeat
    //once false -- will end loop

    cout << "Confirmed" << endl;

   return 0;
}