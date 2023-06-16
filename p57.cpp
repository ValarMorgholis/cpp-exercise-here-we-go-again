#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
    string phoneNumber;
};

int main()
{
    Student students[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the name of student " << i + 1 << ": ";
        cin >> students[i].name;
        cout << "Enter the phone number of student " << i + 1 << ": ";
        cin >> students[i].phoneNumber;
        cout << endl;
    }

    cout << "Student Information:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Student " << i + 1 << ":" << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Phone Number: " << students[i].phoneNumber << endl;
        cout << endl;
    }

    return 0;
}
