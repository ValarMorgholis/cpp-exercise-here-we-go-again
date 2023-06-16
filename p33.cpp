#include <iostream>
using namespace std;
int main()
{
    char color;
    cout << "Enter the letter representing a color: ";
    cin >> color;

    switch (color)
    {
    case 'r':
    case 'R':
        cout << "You like the color red. Choose red!" << endl;
        break;
    case 'g':
    case 'G':
        cout << "You like the color green. Choose green!" << endl;
        break;
    case 'b':
    case 'B':
        cout << "You like the color blue. Choose blue!" << endl;
        break;
    default:
        cout << "Unknown color choice. Please try again." << endl;
        break;
    }

    return 0;
}
