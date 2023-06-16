#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int nums[n];
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    if (k % 2 == 0) {
        int mid = n / 2;
        int left = mid / 2;
        int right = mid + left;
        int median = (nums[left - 1] + nums[right]) / 2;
        cout << median << endl;
    } else {
        int mid = n / 2;
        cout << nums[mid] << endl;
    }

    return 0;
}