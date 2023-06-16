#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string input;
    cout << "Enter the letters: ";
    getline(cin, input);

    transform(input.begin(), input.end(), input.begin(), ::toupper);

    if (input == "A B C D")
    {
        cout << "(character big)" << endl;
    }
    else if (input == "D C B A")
    {
        cout << "(little character)" << endl;
    }
    else
    {
        cout << "(!character unknown)" << endl;
    }

    return 0;
}
