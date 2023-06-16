#include <iostream>
using namespace std;
int main()
{
    int number;
    int sum = 0;
    int count = 0;

    do
    {
        cout << "Enter a number (or 0 to terminate): ";
        cin >> number;

        if (number != 0)
        {
            sum += number;
            count++;
        }
    } while (number != 0);

    if (count != 0)
    {
        double average = static_cast<double>(sum) / count;
        cout << "The average of the entered numbers is: " << average << endl;
    }
    else
    {
        cout << "No numbers were entered." << endl;
    }

    return 0;
}
