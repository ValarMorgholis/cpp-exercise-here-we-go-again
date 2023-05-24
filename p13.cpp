#include <iostream>

using namespace std;

int main()
{
    int yekan, sadghan;

    for (int i = 100; i < 999; i++)
    {
        yekan = i % 10;
        sadghan = (i / 10) / 10;

        if (yekan == sadghan)
            cout << i << endl;
    }
    return 0;
}