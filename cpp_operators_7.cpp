#include <iostream>

using namespace std;

int main()
{
    int val_1, val_2, k;
    
    cout << "Input the first number: ";
    cin >> val_1;
    
    cout << "Input the second number: ";
    cin >> val_2;
    
    k = val_1 % val_2;
    
    cout << "The remainder is: " << k << endl;
    
    return 0;
}
