#include <iostream>

using namespace std;

class rectangle
{
    public:
        int length;
        int breadth;

void initialize(int l, int b)
{
    length=l;
    breadth=b;
}

int area()
{
    return length*breadth;
}

int perimeter()
{
    int p;
    p=2*(length+breadth);

    return p;
}
};




int main()
{
    rectangle r;

    int l, b;
    cout << "enter l b" << endl;

    cin >> l>>b;

    r.initialize(l,b);

    int ar=r.area();
    int peri=r.perimeter();

    cout << "area: " << ar << endl;
    cout << "perimeter: " << peri << endl;

    return 0;
}