#include <iostream>
using namespace std;
int main()
{
    int num = 1000, sum = 0;

    for (int j = 1; j <= num; j++)
    {
        sum = 0;
        for (int i = 1; i < num; i++)
            if (j % i == 0)
                sum += i;
        if (sum == j)
            cout << "Adad " << j << " kamel ast" << endl;
        else
            cout << "Adad " << j << " kamel nist" << endl;
    }
    return 0;
}