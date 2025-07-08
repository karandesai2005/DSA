#include <iostream>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};
int main()
{   
    struct Rectangle r;
    r.length = 12;
    r.breadth = 14;
    cout << r.length << endl;

    return 0;
}