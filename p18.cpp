#include <iostream>

using namespace std;

int main()
{

    int num, i, downto;

    cout << "Find prime numbers downto : ";
    cin >> downto;

    cout << endl
         << "All prime numbers downto " << downto << " are : " << endl;

    for (num = 2; num <= downto; num++)
    {

        for (i = 2; i <= (num / 2); i++)
        {

            if (num % i == 0)
            {
                i = num;
                break;
            }
        }

        if (i != num)
        {
            cout << num << " ";
        }
    }

    return 0;
}