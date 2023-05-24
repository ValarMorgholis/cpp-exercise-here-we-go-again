#include <iostream>

using namespace std;

int main()
{
    int count, num, oddC = 0, evenC = 0;

    cout << "How many number do you have?";
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        cout << "Enter your number:";
        cin >> num;

        if (num % 2 == 0)
            evenC++;
        else
            oddC++;
    }
    cout << evenC << endl
         << oddC;

    return 0;
}