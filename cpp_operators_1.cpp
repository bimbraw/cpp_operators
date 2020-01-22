#include <iostream>

using namespace std;

int main()
{
    double val, cm;
    
    cout << "Input the value in inches: ";
    cin >> val;
    
    cm = val * 2.54;
    
    cout << "The value in cm is: " << cm << endl;
    return 0;
}
