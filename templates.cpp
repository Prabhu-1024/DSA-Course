#include <iostream>

using namespace std;

template <class T>
class arithmetic
{
private:
    T a;
    T b;

public:
    arithmetic(T a, T b);
    T add();
    T sub();
};
    template<class T>
    arithmetic<T>::arithmetic(T a, T b)    
    {        
        this->a=a;
        this->b=b;
    }

    template<class T>
    T arithmetic<T>::add()
    {
        int c;
        c=a+b;
        return c;
    }

    template<class T>
    T arithmetic<T>::sub()
    {
        int c;
        c=a-b;
        return c;
    }


int main()
{
    arithmetic<int> a(10,5);
    cout << "Add: " << a.add() << endl;
    cout << "Sub: " << a.sub() << endl;

    return 0;
}