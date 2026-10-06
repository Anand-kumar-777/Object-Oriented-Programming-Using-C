//classes and object

#include<iostream>
using namespace std;

class Car{
    private:
    string engineNo = "2026AA123";
    private:
    string carNo = "2026BBA123";
    public:
    int manufacturedYear = 2026;
    string builderName = "Tata";
    string carName = "Punch";

    void getPrivateData(){
      cout<<"Engine Number : "<<engineNo<<endl;
    }

    void getProtectedData(){
      cout<<"Car Number : "<<carNo<<endl;
    }
};

int main(){
    Car C1;
    //Accessing the public data first
    cout<<"**** Car Detail ****"<<endl;
    cout<<"Brand Name : "<<C1.carName<<endl;
    cout<<"Build By : "<<C1.builderName<<endl;
    cout<<"Manufactured Year of Car : "<<C1.manufacturedYear<<endl;

    C1.getPrivateData();
    C1.getProtectedData();

    return 0;
}

