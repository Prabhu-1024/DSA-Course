#include <iostream>

using namespace std;


int main() {
    int length=0,breadth=0;

    cout << "Enter Length and Breadth: ";
    cin >> length >> breadth;

    int area=length*breadth;
    int peri=2*(length+breadth);

    cout << "area: " << area << endl << "perimieter: " << peri << endl;
    

    return 0;
}