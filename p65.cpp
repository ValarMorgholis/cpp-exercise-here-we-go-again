#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int checkPalindrome(const string &str)
{
    string reverseStr = str;
    reverse(reverseStr.begin(), reverseStr.end());

    if (str == reverseStr)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    string input;

    cout << "Enter a string: ";
    cin >> input;

    int result = checkPalindrome(input);

    cout << "Result: " << result << endl;

    return 0;
}
