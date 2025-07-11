#include <iostream>

using namespace std;


void swap(int *x , int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 20;
    int b = 30;
    cout << a << "\t" << b << endl;
    swap(&a,&b);
    cout << a << "\t" << b << endl;
}