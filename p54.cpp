#include <iostream>
using namespace std;

int main() {
    int matrix[3][4];
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> matrix[i][j];
        }
    }
    cout << "Original matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    // Swap the first and last columns
    for (int i = 0; i < 3; i++) {
        int temp = matrix[i][0];
        matrix[i][0] = matrix[i][3];
        matrix[i][3] = temp;
    }
    cout << "Swapped matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}