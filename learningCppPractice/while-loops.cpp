#include<iostream>
using namespace std;

int main()
{
    //set a variable i to equal 0
    int i = 0;

    //while loop will run while(something is true){will do this}
    //once condition is false: will execute something else.
    while(i < 3) {
        cout << "Hello " << i << endl;

    //increases value of i on each iteration.
        i = i++;
    }
    //once i == 3: loop will stop.
    cout << "Program complete" << endl;

    return 0;
}