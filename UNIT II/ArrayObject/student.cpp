/*Write a C++ program on Array of Object using the classes and object

Date : 01/09/2026
Author : Anand Kumar
Organization : CUHP
Designation : Student
*/

#include <iostream>
#include <iomanip>
using namespace std;

class Student
{
private:
    string roll_no;
    string name;
    int semester;
    double cgpa;

public:
    void setData(string r, string n, int s, double c)
    {
        roll_no = r;
        name = n;
        semester = s;
        cgpa = c;
    }

    void displayData(int srNo)
    {
        cout << "| "
             << left << setw(7) << srNo
             << "| " << setw(14) << roll_no
             << "| " << setw(24) << name
             << "| " << setw(10) << semester
             << "| " << setw(7) << cgpa

             << "|" << endl;
    }

    double getCgpa() const
    {
        return cgpa;
    }

    int tableFormat()
    {
        cout << "+--------+---------------+-------------------------+-----------+--------+" << endl;

        cout << "| "
             << left << setw(7) << "Sr No"
             << "| " << setw(14) << "Roll No"
             << "| " << setw(24) << "Name"
             << "| " << setw(10) << "Semester"
             << "| " << setw(7) << "CGPA"
             << "|" << endl;

        cout << "+--------+---------------+-------------------------+-----------+--------+" << endl;
        return 0;
    };
};

int main()
{
    int noOfStudent;
    cout << "Enter the number of students : ";
    cin >> noOfStudent;
    if (noOfStudent <= 0) // Size validation of array
    {
        cout << "Number of students must be greater than 0." << endl;
        return 0;
    }
    Student *s = new Student[noOfStudent]; // Dynamic array of objects;

    for (int i = 0; i < noOfStudent; i++) // Loop to input student details
    {
        string roll_no;
        string name;
        double cgpa;
        int semester;

        cout << "** Detail of Student : " << i + 1 << "**" << endl;
        cout << "Roll No : ";
        cin>>roll_no;
        cout << "Name : ";
        getline(cin >> ws, name); // To handle whitespace in name
        cout << "Semester : ";
        cin >> semester;
        cout << "CGPA : ";
        cin >> cgpa;

        s[i].setData(roll_no, name, semester, cgpa);
    }
    cout << "\n";
    cout << "\nStudent Details : " << endl;
    s->tableFormat();

    for (int i = 0; i < noOfStudent; i++)
    {
        s[i].displayData(i + 1);
    }
    cout << "+--------+---------------+-------------------------+-----------+--------+" << endl;

    cout << "\n";
    cout << "\nTopper Student Details : " << endl;

    int topperIndex = 0;

    for (int i = 1; i < noOfStudent; i++)
    {
        if (s[i].getCgpa() > s[topperIndex].getCgpa())
        {
            topperIndex = i;
        }
    }

    s->tableFormat();
    s[topperIndex].displayData(topperIndex + 1);

    cout << "+--------+---------------+-------------------------+-----------+--------+" << endl;
    delete[] s; // Free the dynamically allocated memory
    return 0;
}
