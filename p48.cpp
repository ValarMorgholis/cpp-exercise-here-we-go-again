#include <iostream>

using namespace std;

int main() {
    int scores[50];
    int sum = 0;
    int count = 0;
    int average;

    cout << "Enter the scores of 50 students:\n";

    for (int i = 0; i < 50; i++) {
        cin >> scores[i];
        sum += scores[i];
    }

    average = sum / 50;

    cout << "The average score is " << average << endl;

    for (int i = 0; i < 50; i++) {
        if (scores[i] > average) {
            count++;
        }
    }

    cout << "The number of students whose score is higher than the average is " << count << endl;

    return 0;
}