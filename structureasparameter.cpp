#include <iostream>

using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

struct rectangle *func()
{
    struct rectangle *p;
    p=new rectangle;

    p->length=15;
    p->breadth=7;

    return p;
}

int main() {
    struct rectangle *ptr=func();

    cout << ptr-> length << endl;
    cout << ptr-> breadth << endl;

    return 0;
}