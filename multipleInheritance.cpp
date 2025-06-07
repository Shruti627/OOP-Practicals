#include <iostream>
using namespace std;

class BasicInfo {
public:
    string name;
    int age;

    void getName() {
        cout << "Enter name and age:\n";
        cin >> name >> age;
    }

    void basicInfo() {
        cout << "Name : " << name << "\n"
             << "Age : " << age << "\n";
    }
};

class DepartmentInfo {
public:
    string department;

    void setDepartment() {
        cout << "Enter department:\n";
        cin >> department;
    }

    void getDepartment() {
        cout << "Department : " << department << "\n";
    }
};

class Employee : public BasicInfo, public DepartmentInfo {
public:
    void getEmployeeInfo() {
        getName();
        setDepartment();  
    }

    void displayEmployee() {
        basicInfo();
        getDepartment();  
};
};
int main() {
    Employee emp;
    emp.getEmployeeInfo();
    emp.displayEmployee();
    return 0;
}
