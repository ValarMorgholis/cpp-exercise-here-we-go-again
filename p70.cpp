#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

struct Employee
{
    char personalNumber[9];
    char name[21];
    char surname[26];
    double salary;
};

void calculateAverageSalary(Employee employees[], int size)
{
    double totalSalary = 0;
    for (int i = 0; i < size; i++)
    {
        totalSalary += employees[i].salary;
    }

    double averageSalary = totalSalary / size;

    cout << fixed << setprecision(2);
    cout << "Average Salary: " << averageSalary << endl;
}

void findMaxSalaryEmployee(Employee employees[], int size)
{
    int maxIndex = 0;
    double maxSalary = employees[0].salary;

    for (int i = 1; i < size; i++)
    {
        if (employees[i].salary > maxSalary)
        {
            maxSalary = employees[i].salary;
            maxIndex = i;
        }
    }

    cout << "Maximum Salary: " << maxSalary << endl;
    cout << "Employee: " << employees[maxIndex].personalNumber << ", " << employees[maxIndex].name << " " << employees[maxIndex].surname << endl;
}

int main()
{
    const int size = 50;
    Employee employees[size];

    cout << "Enter employee details:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Employee " << i + 1 << ":" << endl;

        cout << "Personal Number: ";
        cin >> employees[i].personalNumber;

        cout << "Name: ";
        cin.ignore();
        cin.getline(employees[i].name, 21);

        cout << "Surname: ";
        cin.getline(employees[i].surname, 26);

        cout << "Salary: ";
        cin >> employees[i].salary;
    }

    calculateAverageSalary(employees, size);
    findMaxSalaryEmployee(employees, size);

    return 0;
}
