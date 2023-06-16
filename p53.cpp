#include <iostream>

using namespace std;

int main() {
    int matrix[3][4];
    int rowSum[3];

    // Receive input from user
    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> matrix[i][j];
        }
    }

    // Calculate sum of each row
    for (int i = 0; i < 3; i++) {
        rowSum[i] = 0;
        for (int j = 0; j < 4; j++) {
            rowSum[i] += matrix[i][j];
        }
    }

    // Print sum of each row
    cout << "Sum of each row:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Row " << i+1 << ": " << rowSum[i] << endl;
    }

    return 0;
}