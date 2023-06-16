#include <iostream>

using namespace std;

int main() {
    int num[10];
    int pos = 0, neg = 0;

    cout << "Enter 10 numbers: " << endl;

    for (int i = 0; i < 10; i++) {
        cin >> num[i];

        if (num[i] > 0) {
            pos++;
        } else if (num[i] < 0) {
            neg++;
        }
    }

    cout << "Positive numbers: ";
    for (int i = 0; i < pos; i++) {
        cout << num[i] << " ";
    }
    cout << endl;

    cout << "Negative numbers: ";
    for (int i = 0; i < neg; i++) {
        cout << num[i] << " ";
    }
    cout << endl;

    return 0;
}