#include <iostream>
#include <limits>
#include <iomanip>
#include <regex>
using namespace std;

class Student
{
private:
    string name;
    string roll_no;
    double cgpa;
    int semester;
    int age;

public:
    void setData(string r, string n, double c, int s, int a)
    {
        roll_no = r;
        name = n;
        cgpa = c;
        semester = s;
        age = a;
    }

    void displayData(int srNo)
    {
        cout << "Sr No : " << srNo << endl;
        cout << "Roll No : " << roll_no << endl;
        cout << "Name : " << name << endl;
        cout << "CGPA : " << cgpa << endl;
        cout << " Semester : " << semester << endl;
        cout << " Age : " << age << endl;
    }
    double getCGPA() const
    {
        return cgpa;
    }
};

bool isValidRollNo(const string &roll_no)
{
    regex pattern("^MCA[0-9]{3}$");
    return regex_match(roll_no, pattern);
};

bool isValidName(const string &name)
{
    regex pattern("^[A-Za-z]+(?: [A-Za-z]+)*$");
    return regex_match(name, pattern);
}

bool isValidCgpa(double cgpa)
{
    return cgpa >= 0.0 && cgpa <= 10.0;
};

bool isValidSemester(int semester)
{
    return semester >= 1 && semester <= 4;
}

int main()
{
    int arraySize;
    cout << "Enter the number of students : ";
    cin >> arraySize;

    if (arraySize <= 0)
    {
        cout << "Number of students must be greater than 0." << endl;
        return 0;
    }

    Student *s = new Student[arraySize]; // Dynamic array of objects

    for (int i = 0; i < arraySize; i++)
    {
        string roll_no;
        string name;
        double cgpa;
        int semester;
        int age;
        cout << "-- Detail of Student : " << i + 1 << " --" << endl;
        // Roll No validation
        while (true)
        {
            cout << "Roll No (format MCA001) : ";
            cin >> roll_no;
            if (isValidRollNo(roll_no))
            {
                break;
            }
            cout << "Invalid Roll Number!" << endl;
            cout << "Roll number must be in format MCA001." << endl;
        };

        while (true)
        {
            cout << "Name : ";
            getline(cin >> ws, name);
            if (isValidName(name))
            {
                break;
            }
            cout << "Invalid Name!" << endl;
            cout << "Name must contain only alphabets and spaces." << endl;
        };

        while (true)
        {
            cout << "CGPA : ";
            cin >> cgpa;
            // Check wheater user entered the non-numeric value for CGPA
            if (cin.fail())
            {
                cout << "Invalid input! CGPA must be a number." << endl;
                cin.clear();                                         // Clear the error flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid
                continue;
            }
            if (!isValidCgpa(cgpa))
            {
                cout << "Invalid CGPA!" << endl;
                cout << "CGPA must be between 0 and 10." << endl;
                continue;
            }
            break;
        }

        while (true)
        {
            cout << "Semester : ";
            cin >> semester;
            if (!isValidSemester(semester))
            {
                cout << "Invalid Semester!" << endl;
                cout << "Semester must be between 1 and 4." << endl;
                continue;
            }
            break;
        }

        while(true)
        {
            cout << "Age : ";
            cin >> age;
            if (age <= 0 && age > 100)
            {
                cout << "Invalid Age!" << endl;
                cout << "Age must be greater than 0 and lessthan 50." << endl;
                continue;
            }
            break;
        }
        s[i].setData(roll_no, name, cgpa, semester, age);
    }

    cout << "\n";
    cout << "Student Details : " << endl;
    for (int i = 0; i < arraySize; i++)
    {
        cout << "-- Detail of Student : " << i + 1 << " --" << endl;
        s[i].displayData(i + 1);
    }

    for (int i = 0; i < arraySize - 1; i++)
    {
        int maxIndex = i;

        for (int j = i + 1; j < arraySize; j++)
        {
            if (s[j].getCGPA() > s[maxIndex].getCGPA())
            {
                maxIndex = j;
            }
        }

        if (maxIndex != i)
        {
            Student temp = s[i];
            s[i] = s[maxIndex];
            s[maxIndex] = temp;
        }
    }

    int topStudents = (arraySize < 3) ? arraySize : 3;

    cout << "\n";
    cout << "Topper Student : " << endl;
    for (int i = 0; i < topStudents; i++)
    {
        cout << "-- Detail of Student : " << i + 1 << " --" << endl;
        s[i].displayData(i + 1);
    }

    delete[] s; // Free the dynamically allocated memory
}