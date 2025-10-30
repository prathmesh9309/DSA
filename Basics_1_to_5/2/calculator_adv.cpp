#include <iostream>
using namespace std;

int main() {
    int a , b;
    cout << "Enter the first number :";
    cin >> a;
    cout << "Enter the second number " ;
    cin >> b;
    int operation;
    cout << "Enter the operation :\n1 => +\n2 => -\n3 => /\n4 =>*\nEnter your choice :";
    cin >> operation;
    switch (operation)
    {
        case 1:
        cout << "addition is : " << (a + b) << endl;
        break;
        case 2:
        cout << "Subtraction is : " << (a - b) << endl;
        break;
        case 3:
        cout << "division is : " << (a / b) << endl;
        break;
        case 4:
        cout << "multiplication is : " << (a * b) << endl;
        break;
    default:
        cout << "Kindly enter the valid choice...!";
        break;
    }
    return 0;
}