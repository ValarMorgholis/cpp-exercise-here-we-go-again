#include <iostream>
using namespace std;

int main() {
    int numbers[7] = {5, 2, 8, 1, 9, 3, 4}; // initialize the array with some values
    for (int i = 0; i < 7; i++) { // loop through the array
        for (int j = i + 1; j < 7; j++) { // loop through the rest of the array
            if (numbers[i] > numbers[j]) { // if the current number is greater than the next number
                int temp = numbers[i]; // swap the values
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
    // print the sorted array
    for (int i = 0; i < 7; i++) {
        cout << numbers[i] << " ";
    }
    return 0;
}