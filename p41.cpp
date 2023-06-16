#include <iostream>

using namespace std;

int main() {
    int arr[100];
    int sum_even = 0;
    int prod_odd = 1;

    // Input the array elements
    for (int i = 0; i < 100; i++) {
        cin >> arr[i];
    }

    // Calculate the sum of the even elements
    for (int i = 0; i < 100; i++) {
        if (arr[i] % 2 == 0) {
            sum_even += arr[i];
        }
    }

    // Calculate the product of the odd elements
    for (int i = 0; i < 100; i++) {
        if (arr[i] % 2!= 0) {
            prod_odd *= arr[i];
        }
    }

    // Print the results
    cout << "Sum of even elements: " << sum_even << endl;
    cout << "Product of odd elements: " << prod_odd << endl;

    return 0;
}