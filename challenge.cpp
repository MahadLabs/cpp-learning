#include <iostream>
using namespace std;

int main()

{
    double first;
    double second;

    cout <<"Enter your first length:"; 

    cin >> first;

    cout << "Enter your second length:";

    cin >> second;


    cout << " Area of given is: " << first * second << endl;
    cout << " Perimeter of given is: " << 2 * (first + second) << endl;
    return 0;
}