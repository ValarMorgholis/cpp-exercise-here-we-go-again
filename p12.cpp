#include <iostream>

using namespace std;

int main()
{
    int count, num = 0, sum = 0;

    cin >> count;
    for (int i = 0; i < count; i++)
    {
        cin >> num;
        sum += num;
    }
    cout << sum/count;

    return 0;
}