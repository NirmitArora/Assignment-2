#include <iostream>
using namespace std;

int main()
{
    int total = 45;
    int boys =25;
    int girls = total - boys;

    int boysofgradeA = 17;
    int totalgradeA = (80 * total) / 100; 
    int girlsofgradeA = totalgradeA - boysofgradeA;
    
    
    cout << "The girls that received grade A is " << girlsofgradeA << endl;
    
    return 0;
}