#include <iostream>

using namespace std;

int main()
{

    int num, i, downto;

    downto = 100;

    cout << endl
         << "All prime numbers downto " << downto << " are : " << endl;

    for (num = 9; num <= downto; num++)
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