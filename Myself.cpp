#include <iostream>
using namespace std;

int main() 
{
    double height;
    cout << "enter your height\n";
    cin >> height;

    if (height > 5.0) 
    {
        cout << "You are not dwarf\n";
    } 
    else 
    {
        cout << "You are dwarf\n";
    }

    return 0;
}