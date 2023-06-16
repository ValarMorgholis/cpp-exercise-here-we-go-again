#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cstring>
using namespace std;

struct Student
{
    char studentNumber[11];
    char specifications[31];
    double score;
};

void displayAboveAverageStudents(Student students[], int size)
{
    double totalScore = 0;
    for (int i = 0; i < size; i++)
    {
        totalScore += students[i].score;
    }

    double averageScore = totalScore / size;

    cout << "Students with scores higher than the average:" << endl;

    for (int i = 0; i < size; i++)
    {
        if (students[i].score > averageScore)
        {
            cout << "Student Number: " << students[i].studentNumber << endl;
            cout << "Specifications: " << students[i].specifications << endl;
            cout << "Score: " << students[i].score << endl;
            cout << endl;
        }
    }
}

bool compareByScore(const Student &a, const Student &b)
{
    return a.score > b.score;
}

void displayStudentsDescendingOrder(Student students[], int size)
{
    cout << "Students in descending order of score:" << endl;

    sort(students, students + size, compareByScore);

    for (int i = 0; i < size; i++)
    {
        cout << "Student Number: " << students[i].studentNumber << endl;
        cout << "Specifications: " << students[i].specifications << endl;
        cout << "Score: " << students[i].score << endl;
        cout << endl;
    }
}

void displayStudentsWithScoreAboveThreshold(Student students[], int size, double threshold)
{
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (students[i].score > threshold)
        {
            count++;
        }
    }

    cout << "Number of students with score above " << threshold << ": " << count << endl;
}

int main()
{
    const int size = 50;
    Student students[size];

    cout << "Enter student details:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Student " << i + 1 << ":" << endl;

        cout << "Student Number: ";
        cin >> students[i].studentNumber;

        cout << "Specifications: ";
        cin.ignore();
        cin.getline(students[i].specifications, 31);

        cout << "Score: ";
        cin >> students[i].score;
    }

    displayAboveAverageStudents(students, size);

    displayStudentsDescendingOrder(students, size);

    double threshold = 15;
    displayStudentsWithScoreAboveThreshold(students, size, threshold);

    return 0;
}
