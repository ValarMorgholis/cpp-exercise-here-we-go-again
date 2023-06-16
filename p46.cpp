#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int freq[k + 1] = {0};
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    int max_freq = 0;
    for (int i = 1; i <= k; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
        }
    }

    int modes[max_freq];
    int mode_count = 0;
    for (int i = 1; i <= k; i++) {
        if (freq[i] == max_freq) {
            modes[mode_count] = i;
            mode_count++;
        }
    }

    if (mode_count == 0) {
        cout << "No mode found" << endl;
    } else if (mode_count == 1) {
        cout << modes[0] << endl;
    } else {
        cout << "Multiple modes found: ";
        for (int i = 0; i < mode_count; i++) {
            cout << modes[i] << " ";
        }
        cout << endl;
    }

    return 0;
}