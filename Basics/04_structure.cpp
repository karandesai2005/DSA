#include <iostream>

using namespace std;

struct Rectangle
{
    int length;//4
    int breadth;//4
    char x;//1
};
int main()
{   
    struct Rectangle r;
    r.length = 12;
    r.breadth = 14;
    cout << r.length << endl;
    cout << sizeof(r);// it would be 12 bytes instead of 9 bytes because its easy for computer to read 4 bytes 
    // so it will tak 4 bytes for char but would use only 1 byte
    return 0;
}