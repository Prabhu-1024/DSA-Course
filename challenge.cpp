#include <iostream>
#include <climits>
#include <vector>

using namespace std;

void Print(std::vector<int>);
void Add(std::vector<int> &vec);
double Mean(vector<int> vec);
int Largest(vector<int> vec);
int Smallest(vector<int> vec);

int main()
{
    char choice{};
    vector<int> vec;

    do
    {
        cout << "\n\n1. Press P to PRINT all the elements" << endl;
        cout << "2. Press A to ADD new elements" << endl;
        cout << "3. Press M to find the MEAN of all the elements" << endl;
        cout << "4. Press L to find the LARGEST number" << endl;
        cout << "5. Press S to find the SMALLEST number" << endl;
        cout << "6. Press Q to quit\n"
             << endl;

        cout << "Enter the desired choice: ";
        cin >> choice;

        switch (choice)
        {
        case 'P':
        case 'p':
        {
            cout << "You chose: " << choice << endl;
            Print(vec);

            break;
        }

        case 'A':
        case 'a':
        {
            cout << "You chose: " << choice << endl;
            Add(vec);
            break;
        }

        case 'M':
        case 'm':
        {
            cout << "You chose: " << choice << endl;
            double mean = Mean(vec);
            cout << "The mean of the elements of vector is: " << mean << endl;
            break;
        }

        case 'S':
        case 's':
        {
            cout << "You chose: " << choice << endl;
            int small = Smallest(vec);
            cout << "The largest element of the vector is: " << small << endl;

            break;
        }

        case 'L':
        case 'l':
        {
            cout << "You chose: " << choice << endl;
            int large = Largest(vec);
            cout << "The largest element of the vector is: " << large << endl;
            break;
        }

        case 'Q':
        case 'q':
        {
            cout << "You Chose: " << choice << " - Quitting program." << endl;
            break;
        }

        default:
        {
            cout << "Wrong input, please try again." << endl;
            break;
        }
        }

    } while (choice != 'q' && choice != 'Q');
    return 0;
}

void Print(std::vector<int> vec)
{
    if (vec.empty())
    {
        cout << "[] - The list is empty" << endl;
    }
    else
    {
        cout << "[";
        for (auto value : vec)
        {
            cout << value << " ";
        }
        cout << "]";
    }
}
void Add(std::vector<int> &vec)
{
    int n;
    cout << "Enter the number you want: ";
    cin >> n;

    vec.push_back(n);
}

double Mean(vector<int> vec)
{
    double mean{};
    double sum{};
    if (vec.empty())
    {
        cout << "[] - The list is empty" << endl;
        return 0.0;
    }

    else
    {
        for (size_t i = 0; i < vec.size(); i++)
        {
            sum += vec.at(i);
        }
    }
    mean = (double)sum / vec.size();

    return mean;
}
int Largest(vector<int> vec)
{
    if (vec.empty())
    {
        cout << "[] - the list is empty" << endl;
        return INT_MIN;
    }
    else
    {
        int largest = vec.at(0);
        for (auto i : vec)
        {
            if (i > largest)
                largest = i;
        }
        return largest;
    }
}
int Smallest(vector<int> vec)
{
    if (vec.empty())
    {
        cout << "[] - the list is empty" << endl;
        return INT_MAX;
    }
    else
    {
        int smallest = vec.at(0);
        for (auto i : vec)
        {
            if (i < smallest)
                smallest = i;
        }
        return smallest;
    }
    
}
