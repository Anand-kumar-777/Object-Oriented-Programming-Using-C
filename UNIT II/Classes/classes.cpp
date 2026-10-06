/*Class is a user-defined data type that groups data members (variables)
and member functions (methods) together.*/
#include <iostream>
using namespace std;

class vehicle
{
private:
    string engineNumber;

protected:
    string number;

public:
    string brand;
    void setDetails()
    { // This is setter method to get access and provide the details of protected and private class
        engineNumber = "AA25ADF14Z";
        number = "UP44AD4512";
    }

    void getDetails()
    { // Getter is used to display the detail;
        cout << "Vehicle brand is : " << brand << endl;
        cout << "Engine Number : " << engineNumber << endl;
        cout << "Vehicle Number : " << number<<endl;
    }
};

class car : public vehicle{
 public:
 string carName;
//  void setDetail(){
//     carName = "Tata Tiago";
//  }

//  void displayName(){
//     cout<<carName<<endl;
//  }
};

int main()
{
    car c1;
    c1.setDetails();
    c1.brand = "Tata";
    c1.getDetails();
    c1.carName = "Tiago";
    cout<<"Car Name is : "<<c1.carName;
}