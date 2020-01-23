#include <iostream>

using namespace std;

int main()
{
    int val_1, val_2, val_3;
    bool var = false;
    
    cout << "The objective is that first two should represent the minimum and maximum values of the interval respectively. Then the program checks if the third number is greater or equal to the minimum value and if it is lower or equal to the maximum value. " << endl;
    
    cout << "Input the first number: ";
    cin >> val_1;
    
    cout << "Input the second number: ";
    cin >> val_2;

    cout << "Input the third number: ";
    cin >> val_3;
    
    if (val_3 >= val_1 && val_3 <= val_2)
    {
        var = true;
        cout << "1 if correct and 0 if incorrect: " << var << endl;
    }
    else
    {
        cout << "1 if correct and 0 if incorrect: " << var << endl;
    }
    
    return 0;
}
