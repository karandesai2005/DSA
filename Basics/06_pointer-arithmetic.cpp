#include <iostream>

using namespace std;
int main()
{
    int arr[] = {1,2,3};
    int* p  = arr;

    cout << *p << endl;
    cout << "address of first values is " << p << endl;
    p++;
    cout << *p << endl;
    cout << "address of second value is " << p <<endl;
    
    return 0;
}