#include <iostream>
using namespace std;
class Bdate{
    public:
    int day,month,year;
    Bdate(int d,int m,int y){
        this->day=d;
        this->month=m;
        this->year=y;
    }
    void display(){
        cout<<"Birth Date : "<<day<<"/"<<month<<"/"<<year<<"\n";
    }
};
class Employee{
    public:
    string name;
    Bdate birthdate;
    Employee(string name,int d,int m,int y):birthdate(d,m,y){
        this->name=name;
    }
    void displayInfo(){
        cout<<"Name : "<<name<<endl;
        birthdate.display();
    }
};
int main() {
    Employee emp1("Shruti",27,2,2006);
    emp1.displayInfo();
    return 0;
}