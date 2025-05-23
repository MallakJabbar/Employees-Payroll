#include <iostream>
using namespace std;

void getinfo(int employee[], int hours[], double payRate[]);
void employeeWages(int employee[], int hours[], double payRate[], double wages[]);
void displayWages(int employee[], double wages[]);

int main()
{
    const int employeeNumber = 7;
    int employee[employeeNumber] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489};
    int hours[employeeNumber];
    double payRate[employeeNumber];
    double wages[employeeNumber];

    getinfo(employee, hours, payRate);
    employeeWages(employee, hours, payRate, wages);
    displayWages(employee, wages);

    return 0;
}

void getinfo(int employee[], int hours[], double payRate[])
{
    for (int i = 0; i < 7; i++)
    {
        cout << "Enter the hours employee # " << employee[i] << " worked"  << ": ";
        cin >> hours[i];

        while (hours[i] < 0)
        {
            cout << "Error! please enter a positive  value ";
            cin >> hours[i];
        }

        cout << "Please enter the hourly pay for employee #" << employee[i] << ": ";
        cin >> payRate[i];

        while (payRate[i] < 15.00)
        {
            cout << "Error! the pay rate should be at least $15.00 per hour. Please enter value at least 15.00 : ";
            cin >> payRate[i];
        }
    }
}
void employeeWages(int employee[], int hours[], double payRate[], double wages[])
{
    for (int i = 0; i < 7; i++)
    {
        wages[i] = hours[i] * payRate[i];
    }
}

void displayWages(int employee[], double wages[])
{
    for (int i = 0; i < 7; i++)
    {
        cout << "The employee #" << employee[i] << " has earned $" << wages[i] << endl;
    }
}