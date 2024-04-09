// ConstructMembers - the member objects of a class
// are each constructed before the container class
// constructor gets a shot at it

#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

class Course
{
public:
    Course()
    {
        cout << "constructing Course" << endl;
    }
};

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

class Teacher
{
public:
    Teacher()
    {
        cout << "constructing Teacher" << endl;
    }

protected:
    Course c;
};

class TutorPair
{
public:
    TutorPair()
    {
        cout << "constructing TutorPair" << endl;
    }

protected:
    Student student;
    Teacher teacher;
    int noMeetings;
};

int main(int nNumberofArgs, char *pszArgs[])
{
    cout << "Creating a student object" << endl;
    TutorPair tp;

    // output
    // Creating TutorPair object
    // constructing student
    // constructing course
    // constructing teacher
    // constructing tutorpair
    // Press any key to continue . . .

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    system("PAUSE");
    return 0;
}