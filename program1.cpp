#include <iostream>
using namespace std;

int main()
{
    bool equal;
    cout << "Enter 1st number: ";
    int a;
    cin >> a;

    cout << "Enter 2nd number: ";
    int b;
    cin >> b;

    if (a == b)
    {
        equal = true;
    }
    else
    {
        equal = false; 
    }

    cout << equal << endl;
    return 0;
}