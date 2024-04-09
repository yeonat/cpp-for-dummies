// ConstructArray - example that invokes a constructor
// on an array of objects

#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

class Student
{
public:
    Student()
    {
        cout << "constructing Student" << endl;
        semesterHours = 0;
        gpa = 0.0;
    }
    // ...other public members...
protected:
    int semesterHours;
    float gpa;
};

int main(int nNumberofArgs, char *pszArgs[])
{
    cout << "Creating a student object" << endl;
    Student s[5];

    // wait until user is ready before terminating program
    // to allow the user to see the program results

    // output

    // Creating an array of 5 Student objects
    // constructing student
    // constructing student
    // constructing student
    // constructing student
    // constructing student
    // Press any key to continue . . .

    system("PAUSE");
    return 0;
}