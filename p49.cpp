#include <iostream>
using namespace std;

int main() {
    int list1[100], list2[100], count = 0;

    // Take input for list 1
    cout << "Enter 100 integers for list 1:\n";
    for (int i = 0; i < 100; i++) {
        cin >> list1[i];
    }

    // Take input for list 2
    cout << "Enter 100 integers for list 2:\n";
    for (int i = 0; i < 100; i++) {
        cin >> list2[i];
    }

    // Count the number of common members
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if (list1[i] == list2[j]) {
                count++;
                break;
            }
        }
    }

    // Print the number of common members
    cout << "The number of common members is: " << count << endl;

    return 0;
}