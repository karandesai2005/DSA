#include <iostream>

using namespace std;

int main()

{
    int a = 10;
    int *p;
    p = &a;
    cout << p<<endl; //0x7ffec050cabc
    cout << *p<<endl;
}