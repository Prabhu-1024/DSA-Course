#include <iostream>

using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

int area(int length, int breadth)
{
    return length*breadth;
}

int perimeter(int length, int breadth)
{
    return 2*(length+breadth);
}

void initialize(struct rectangle *r, int l, int b)
{
    r->length=l;
    r->breadth=b;
}

int main() {
    rectangle r1={10,5};

    int l,b;

    cout << "Enter length and breadth" << endl;
    cin >> l >> b;

    initialize(&r1, l, b);

    int a= area(l,b);
    int peri = perimeter(l, b);

    cout << "Perimeter: " << peri << endl << "area: " << a << endl;

    return 0;
}