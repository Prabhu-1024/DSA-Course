#include <iostream>

using namespace std;

class circle
{
private:
    int radius;

public:
    circle()
    {
        radius = 0;
    }

    circle(int rad)
    {
        radius = rad;
    }

    int area(int rad) 
    {
        return 3.14*rad*rad;
    }

    int perimeter(int rad)
    {
        return 4*3.14*rad;
    } 

    void setradius(int rad)
    {
        radius = rad;
    }

    int getradius()
    {
        return radius;
    }

    ~circle()
    {

    }
};


int main()
{
    circle a{};
    cout << "Area: " << a.area(10) << endl;
    cout << "Perimeter: " << a.perimeter(10) << endl;

    return 0;
}