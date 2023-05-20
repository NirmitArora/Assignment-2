#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter the 5-digit number: ";
    cin >> number;

    int a = number / 10;
    int secondlastdigit = a % 10;
    int b = a / 1000;

    cout << "The sum of first and second last digit is " << secondlastdigit + b << endl;

    
    return 0;
}