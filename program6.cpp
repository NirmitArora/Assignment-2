#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "The sum is " << a + b << endl;
    if (a > b)
    {
        cout << "The difference is " << a - b;
    }
    else
    {
        cout << "The difference is " << -(a - b)<<endl;
    }
    cout << "The product is " << a * b << endl;
    cout << "The quotient is " << a / b << endl;
    return 0;
}