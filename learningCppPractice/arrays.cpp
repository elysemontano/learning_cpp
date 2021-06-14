#include<iostream>
using namespace std;

int main(){

/* int value[5];

value[0] = 1;
value[1] = 2;
value[2] = 3;
value[3] = 4;
value[4] = 5;

cout << value[0] << endl;
cout << value[1] << endl;
cout << value[2] << endl;
cout << value[3] << endl;
 cout << value[4] << endl; */

/* double numbers[3] = {1.2, 2.3, 3.4};
cout << numbers[0] << endl;

for(int i=0; i<3; i++) {
    cout << "Index " << i << " = " << numbers[i] << endl;
}

int arrayStartsWithZero[4] = {};
for(int i=0; i<4; i++) {
    cout << "Index " << i << " = " << arrayStartsWithZero[i] << endl;
}

string stringArray[] = {"foo", "bar"};
for(int i=0; i<2; i++) {
    cout << stringArray[i] << endl;
 } */

//Two dimensional arrays:
string food[2][3] = {
    //first index of i, each item in array is index j
    {"cheese", "milk", "butter"},
    //second index of i, each item in array is index j
    {"zucchini", "brussel sprouts", "broccoli"}
};

//Nested for loop:
// First iteration goes through row
for(int i=0; i<2; i++){
    //Second interation goes through collumn
    for(int j=0; j<3; j++) {
        cout << food[i][j] << " " << flush;
    }
    //creates new line for next row iteration
    cout << endl;
}

int multiples[3][5] = {
    {1, 2, 3, 4, 5},
    {2, 4, 6, 8, 10},
    {3, 6, 9, 12, 15}
};

for(int i=0; i< sizeof(multiples)/sizeof(multiples[0]); i++) {
    for(int j=0; j< sizeof(multiples[0])/sizeof(int); j++) {
        cout << multiples[i][j] << " " << flush;
    }
    cout << endl;
}

//Size of array:
int arraySize[] = {1, 2, 3, 4};
/* cout << sizeof(arraySize) << endl;
cout << sizeof(int) << endl;*/

for(int i=0; i< sizeof(arraySize)/sizeof(int); i++) {
    cout << arraySize[i] << " " << flush;
}
cout << endl;

    return 0;
}