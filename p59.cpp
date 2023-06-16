#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    int maximum = max(num1, num2);

    cout << "The maximum of " << num1 << " and " << num2 << " is: " << maximum << endl;

    return 0;
}
