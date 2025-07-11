#include <iostream>

using namespace std;

struct rectangle{
    int l;
    int b;
};

int main()
{
    rectangle *p = new rectangle;
    int length = p->l = 10;
    int breadth = p->b = 11;
    cout << length << endl;ff
    cout << breadth << endl;
    return 0;
}