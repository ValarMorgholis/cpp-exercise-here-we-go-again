#include <iostream>
#include <vector>

using namespace std;

int main() {
    int num_students;
    cout << "Enter the number of students: ";
    cin >> num_students;

    vector<int> grades(num_students);
    cout << "Enter the grades: ";
    for (int i = 0; i < num_students; i++) {
        cin >> grades[i];
    }

    int num_passes = 0;
    int num_failures = 0;
    for (int grade : grades) {
        if (grade >= 50) {
            num_passes++;
        } else {
            num_failures++;
        }
    }

    cout << "Number of passes: " << num_passes << endl;
    cout << "Number of failures: " << num_failures << endl;

    return 0;
}