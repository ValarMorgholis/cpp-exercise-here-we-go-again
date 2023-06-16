#include <iostream>
using namespace std;

double calAverage(int numbers[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += numbers[i];
    }
    return static_cast<double>(sum) / size;
}

int main()
{
    int size = 100;
    int numbers[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    double average = calAverage(numbers, size);

    cout << "The average of the 100 numbers is: " << average << endl;

    return 0;
}
