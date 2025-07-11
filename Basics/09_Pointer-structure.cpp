#include <iostream>

using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

int main()
{
    struct rectangle r = {10,5};
    struct rectangle *p = &r;
    cout << p->length<<endl;
    p->length = 12;
    cout << p->length<<endl;


}