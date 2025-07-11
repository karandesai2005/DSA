#include<iostream>

using namespace std;

void swap(int x , int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a = 20;
    int b = 30;
    cout << a << "\t" << b << endl;
    swap(a,b);
    cout << a << "\t" << b << endl;
}
// here the swap fails as it is pass by value here any changes in the formal parametes would not affect the actual values 