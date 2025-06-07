#include <iostream>
using namespace std;
class Complex{
    public:
    int a,b;
    void getData(){
        cout<<"Enter two numbers : \n";
        cin>>a>>b;
    }
    Complex operator++(){
        a=++a;
        b=++b;
    }
    Complex operator--(){
        a=--a;
        b=--b;
    }
    void display(){

        cout<<a<<"+"<<b<<"i"<<"\n";
    }
};
int main() {
    Complex obj;
    obj.getData();
    ++obj;
    cout<<"Incremented Complex number : "<<endl;
    obj.display();
    --obj;
    cout<<"Decremented Complex number : "<<endl;
    obj.display();
    return 0;
}