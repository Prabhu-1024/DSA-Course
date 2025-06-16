#include <iostream>

using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

int main() {
    struct rectangle r1={10,5};

    cout << r1.length << endl;
    cout << r1.breadth << endl;

    return 0;
}