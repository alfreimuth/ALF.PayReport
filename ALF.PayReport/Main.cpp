
// Pay Report
// Alex Freimuth

#include <iostream>
#include <conio.h>

using namespace std;

struct Employee
{
    int ID;
    string FirstName;
    string LastName;
    float HoursWorked;
    float HourlyRate;
};

int GetNumOfEmployees() 
{
    
    cout << "How many employees do you want to process? ";
    int size = 0;
    cin >> size;
    return size;

}

int main()
{
    int size = GetNumOfEmployees();

    int* number = new int[size];

    Employee* employee = new Employee[size];


    for (int i = 0; i < size; i++)
    {

        cout << "\nEmployee " << i+1 << "\n";

        int id;
        string fname;
        string lname;
        float hoursworked;
        float rate;

        cout << "Insert an ID: ";
        cin >> id;
        cout << "Insert a first name: ";
        cin >> fname;
        cout << "Insert a last name: ";
        cin >> lname;
        cout << "Insert the amount of hours worked: ";
        cin >> hoursworked;
        cout << "Insert their hourly rate: ";
        cin >> rate;

        employee[i] = {id, fname, lname, hoursworked, rate};
    }

    int totalPay = 0;

    cout << "\nPay Report \n----------\n";

    for (int i = 0; i < size; i++)
    {
        
        float weeklyPay = employee[i].HoursWorked * employee[i].HourlyRate;
        cout << employee[i].ID << ". " << employee[i].FirstName << " " << employee[i].LastName << ": " << weeklyPay << "\n";
        totalPay = totalPay + weeklyPay;
        
    }
    cout << "\n\nTotal Pay: " << totalPay;

	(void)_getch();
	return 0;
}
