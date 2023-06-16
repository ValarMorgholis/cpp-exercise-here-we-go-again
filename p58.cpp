#include <iostream>
#include <string>
using namespace std;

int main()
{
    string names[10];
    int count = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "Enter name " << i + 1 << ": ";
        cin >> names[i];
    }

    for (int i = 0; i < 10; i++)
    {
        if (names[i] == "Ali" || names[i] == "ali" || names[i] == "علی")
        {
            count++;
        }
    }

    cout << "Number of people named Ali: " << count << endl;

    return 0;
}
