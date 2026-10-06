#include <iostream>
using namespace std;

class Car
{
private:
    string engineNo;

protected:
    string ownerName;

public:
    string carName;
    string modelYear;

    void setValue()
    {
        cout << "Engine Number : ";
        cin >> engineNo;
        cout << "Owner Name : ";
        cin.ignore();
        getline(cin, ownerName);
        cout << "Car Name : ";
        cin >> carName;
        cout << "Model Year of " << carName << " : ";
        cin >> modelYear;
    }

     void display()
    {
        cout << carName << " Car Engine No is " << engineNo << endl;
        cout << ownerName << " is Owner of this " << carName << " Car" << endl;
        
    }
};

class Owner : public Car
{
public:

    void detailDisplay()
    {
        cout << "This is " << carName << " Car" << endl;
        cout << "In " << modelYear << ", " << carName << " Car Manufactured." << endl;
        display();
    }
    

    // void display()
    // {
    //     cout << carName << " is Very good car." << endl;
    // }
};

int main()
{
    Owner F;
    Car C;
    F.setValue();
    F.detailDisplay();
    return 0;
}