#include<iostream>
#include<string.h>
using namespace std;
struct Employee {
    int employeeID;
    string employeeName;
    string qualification;
    float experience;
    long long contactNumber;
};
int main() {
    int numOfEmployees;

    cout << "Enter the number of employees (0 to 1000): ";
    cin >> numOfEmployees;

     while (numOfEmployees < 0 || numOfEmployees > 1000) {
        cout << "Invalid input. Please enter a number between 0 and 1000: ";
        cin >> numOfEmployees;
    }

    Employee employees[numOfEmployees];
    for (int i = 0; i < numOfEmployees; ++i) {
        cout << "\nEnter details for employee " << i + 1 << ":" << endl;
    cout << "Enter 4-digit Employee ID: ";
        cin >> employees[i].employeeID;

        
         while (employees[i].employeeID < 1000 || employees[i].employeeID > 9999) {
            cout << "Invalid input. Please enter a 4-digit Employee ID: ";
            cin >> employees[i].employeeID;
        }

        cout << "Enter Employee Name: ";
        cin.ignore();  
        getline(cin, employees[i].employeeName);

        cout << "Enter Qualification: ";
        getline(cin, employees[i].qualification);

        cout << "Enter Experience: ";
        cin >> employees[i].experience;

       cout << "Enter 10-digit Contact Number: ";
        cin >> employees[i].contactNumber;

       while (employees[i].contactNumber < 1000000000 || employees[i].contactNumber > 9999999999) {
            cout << "Invalid input. Please enter a 10-digit Contact Number: ";
            cin >> employees[i].contactNumber;
        }
    }
   char searchOption;
    do {
        int searchID;
        cout << "\nEnter Employee ID to search: ";
        cin >> searchID;

        bool found = false;
        for (int i = 0; i < numOfEmployees; ++i) {
            if (employees[i].employeeID == searchID) {
                cout << "Employee details found:" << endl;
                cout << "Employee ID: " << employees[i].employeeID << endl;
                cout << "Employee Name: " << employees[i].employeeName << endl;
                cout << "Qualification: " << employees[i].qualification << endl;
                cout << "Experience: " << employees[i].experience << endl;
                cout << "Contact Number: " << employees[i].contactNumber << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "Employee not found." << endl;
        }

        cout << "Do you want to search again? (y/n): ";
        cin >> searchOption;
    } while (searchOption == 'y' || searchOption == 'Y');
    cout << "Program exited." << endl;
    cout<<"BY 23AIML010 OM CHOKSI "<<endl;

    return 0;
}