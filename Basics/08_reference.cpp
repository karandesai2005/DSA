#include <iostream>
//reference is nothing but another name for the variable 
//this is usefull for parameter passing
using namespace std;

int main()
{
    int a = 10;
    int &r = a; //& -> makes a variable reference variable


    // int b = 25;
    // r = b;// this will make a and r both 25
    cout << a <<endl;
    cout << r << endl;
    r++;
    cout << a << "\t"<< r << endl;
    return 0;
}