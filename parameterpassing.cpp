#include <iostream>

using namespace std;

void swap(int &x, int&y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}

int main() {
    int num1=10,num2=15;
    
    cout << "First number before swap: " << num1 << endl;
    cout << "second number before swap: " << num2 << endl;


    swap(num1,num2);

    cout << "First number after swap: " << num1 << endl;
    cout << "second number after swap: " << num2 << endl;

    return 0;
}