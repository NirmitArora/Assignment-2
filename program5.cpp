#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter the 3-digit number: ";
    cin >> number;

    int a = number % 10;
    number /= 10;
    int b = number % 10;
    number /= 10;
    int c = number % 10;
    
    
    cout << "The sum of digits will be " << a + b + c << endl;
    return 0;
}