#include <iostream>
#include <algorithm>
using namespace std;

void sortNumbers(int numbers[], int size)
{
    sort(numbers, numbers + size);
}

int main()
{
    const int size = 20;
    int numbers[size];

    cout << "Enter 20 numbers:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    sortNumbers(numbers, size);

    cout << "Sorted numbers in ascending order:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
