#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    float grade[3], total_grade = 0, gpa;

    for (int i = 1; i <= 5; i++) {
        cout << "Enter name of student " << i << ": ";
        getline(cin, name);

        for (int j = 1; j <= 3; j++) {
            cout << "Enter grade for course " << j << ": ";
            cin >> grade[j-1];
            total_grade += grade[j-1];
        }

        gpa = total_grade / 3;
        cout << "Name: " << name << endl;
        cout << "Grade Point Average: " << gpa << endl << endl;

        total_grade = 0;
    }

    return 0;
}