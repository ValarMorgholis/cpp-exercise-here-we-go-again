#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    char tar[1], temp[2], temp1[2], result[2] = {0};

    cout << "Do your move : ";
    cin >> i;
    cin >> tar[0];

    while (i > 0)
    {
        cin >> temp[0] >> temp1[1];

        if (temp1[1] == tar[0])
        {
            result[0] = temp[0];
            tar[0] = temp[0];
        }
        i--;
    }
    cout << result[0] << endl;

    return 0;
}