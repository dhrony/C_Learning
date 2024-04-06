#include<iostream>
using namespace std;
int main()

{

/*
int size is 4 bytes
float is 4 bytes
double is 8 bytes
boolean is 1 byte
char is 1 byte
*/

int num01;
double num02;
char char01;
string string01;

cout << "Enter Integer Type Number = ";
cin >> num01;
cout << endl;
cout << "Enter a double type Number = ";
cin >> num02;
cout << endl;
cout << "Enter First Letter of your Last Name = ";
cin >> char01;
cout << endl;
cout << "Enter your Last Name = ";
cin >> string01;
cout << endl << endl;

// Output Block for Data Type Input

cout << "Integer Type Number as Per Input =" << num01 << endl;

cout << "Double Type Number as Per Input =" << num02 << endl;

cout << "Character Type Data as Per Input =" << char01 << endl;

cout << "String Type Data as Per Input =" << string01 << endl;

return 0;

}