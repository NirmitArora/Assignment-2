#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    if (num1 < 50 && num1 < num2)
    {
        cout << 0;
    }
    else
    {
        cout << 1;
    }
    return 0;
}