#include <iostream>

using namespace std;

int main()
{
    int count, num, max = 0;

    cin >> count;

    for (int i = 0; i < count; i++)
    {
        cin >> num;
        if (num > max)
            max = num;

        num = 0;
    }

    return 0;
}