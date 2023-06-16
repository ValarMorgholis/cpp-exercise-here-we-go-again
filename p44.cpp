#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int scores[40];
    int num_students = 40;
    int num_below_15 = 0;
    int highest_score = 0;
    int lowest_score = 100;

    // Get the scores of 40 students
    for (int i = 0; i < num_students; i++) {
        cout << "Enter score for student " << i+1 << ": ";
        cin >> scores[i];

        // Count the number of students whose score is below 15
        if (scores[i] < 15) {
            num_below_15++;
        }

        // Update the highest and lowest scores
        if (scores[i] > highest_score) {
            highest_score = scores[i];
        }
        if (scores[i] < lowest_score) {
            lowest_score = scores[i];
        }
    }

    // Print the number of students whose score is below 15
    cout << "Number of students whose score is below 15: " << num_below_15 << endl;

    // Print the scores in ascending order
    sort(scores, scores + num_students);
    cout << "Scores in ascending order: ";
    for (int i = 0; i < num_students; i++) {
        cout << scores[i] << " ";
    }
    cout << endl;

    // Print the highest and lowest scores
    cout << "Highest score: " << highest_score << endl;
    cout << "Lowest score: " << lowest_score << endl;

    return 0;
}