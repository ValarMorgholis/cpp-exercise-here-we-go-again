#include <iostream>

using namespace std;

int main() {
    int arr[1000] = {0}; // initialize all elements to 0
    int count = 0; // initialize count to 0

    // loop through the array and increment count for each 26
    for (int i = 0; i < 1000; i++) {
        if (arr[i] == 26) {
            count++;
        }
    }

    // print the count
    cout << "The number of repetitions of the number 26 in the array is: " << count << endl;

    return 0;
}