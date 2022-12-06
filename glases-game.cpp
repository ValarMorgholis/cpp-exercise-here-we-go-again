#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    char tar[1], temp[2], temp1[2], temp2[1], result[2] = {0};

    // cout << "Do your move : ";
    cin >> i;
    cin >> tar[0];

    // for (; i < 0;)
    // {
    cin >> temp[0] >> temp1[1];
    // i--;

    if (temp1[1] == tar[0] && temp1[1] == 'r')
        result[0] = temp[0];

    else if (temp1[1] == tar[0] && temp1[1] == 'm')
        result[0] = temp[0];

    else if (temp1[1] == tar[0] && temp1[1] == 'l')
        result[0] = temp[0];

    // ---------------------------------------------------

 
    // }
    cout << result[0] << endl;

    return 0;
}