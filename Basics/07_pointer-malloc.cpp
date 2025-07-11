#include <iostream>

using namespace std;

int main()
{
    int *p = new int; 
    *p = 10;

    cout <<"address: " << p <<endl;
    cout << "values: " <<  *p << endl;
    cout << "size: " << sizeof(*p) <<endl;
    return 0;
}