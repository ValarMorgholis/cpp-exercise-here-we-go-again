#include <iostream>

using namespace std;

int main() {
    int scores[50];
    int highest_score = 0;
    int num_students_with_highest_score = 0;

    // Get the scores of 50 students
    for (int i = 0; i < 50; i++) {
        cout << "Enter score for student " << i+1 << ": ";
        cin >> scores[i];

        // Update highest score and number of students with highest score
        if (scores[i] > highest_score) {
            highest_score = scores[i];
            num_students_with_highest_score = 1;
        } else if (scores[i] == highest_score) {
            num_students_with_highest_score++;
        }
    }

    // Print the highest score and number of students with highest score
    cout << "Highest score: " << highest_score << endl;
    cout << "Number of students with highest score: " << num_students_with_highest_score << endl;

    return 0;
}