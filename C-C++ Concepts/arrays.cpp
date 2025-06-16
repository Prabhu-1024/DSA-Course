#include <iostream>

using namespace std;

int main() {
    int n{};
    cout << "enter size" << endl;
    cin >> n;

    int A[n];

    cout << "enter elements" << endl;

    for(int i{0};i<n;i++)
    {
        cin >> A[i];
    }

    cout << "elements" << endl;

    for(int j{0};j<n;j++)
    {
        cout << A[j] <<  endl;
    }

    return 0;
}