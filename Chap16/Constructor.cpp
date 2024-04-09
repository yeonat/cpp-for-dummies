// Constructor - example that invokes a constructor

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

protected:
    int semesterHours;
    float gpa;
};

int main(int nNumberofArgs, char *pszArgs[])
{
    cout << "Creating a student object" << endl;
    Student s;

    cout << "creating a new object off the heap" << endl;
    Student *pS = new Student;

    // wait until user is ready before terminating program
    // to allow the user to see the program results

    system("PAUSE");
    return 0;
}