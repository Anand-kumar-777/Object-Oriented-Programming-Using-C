//Access specifers in C++ 

#include<iostream>
using namespace std;

class Employee{
    private:
    int salary;
    protected:
    int emId;
    public:
    string name;
    string designation;

    void setData(){
        cout<<"Enter the Employee Id : ";
        cin>>emId;
        cout<<"Enter Employee Name : ";
        cin.ignore();
        getline(cin, name);
        cout<<"Designation of Employee : ";
        getline(cin, designation);
        cout<<"Enter Employee Salary : ";
        cin>>salary;
    }
    
    void getSalary(){
        cout<<"Salary : "<<salary<<endl;
    }
};

class manager : public Employee{
    public:
    int age;

    void setAge() {
        cout << "Enter the Employee age: ";
        cin >> age;
    }

    void getData(){
        cout<<"**** "<<designation<<" Details ****"<<endl;
        cout<<"Employee Name : "<<name<<endl;
        cout<<"Employee Id : "<<emId<<endl;
        getSalary();
        cout<<"Age : "<<age<<endl;
    }

    
};

int main(){
    manager M1;
    M1.setData();
    M1.setAge();
    M1.getData();

    return 0;
}

