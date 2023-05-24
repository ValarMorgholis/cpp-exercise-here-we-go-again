#include <iostream>

using namespace std;

int main()
{
    int count = 0, num, aval[100];

    cin >> count;

    for (int i = 0; i < count; i++)
    {
        cin >> num;

        for (int j = 0; j < num; j++)
        {
            if (num % j != 0)
                aval[i] = num;
        }
        num = 0;
    }
    for (int i = 0; i < count; i++)
    {
        cout << aval[i];
    }

    return 0;
}