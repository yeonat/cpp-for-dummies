// DestructMembers - this program both constructs and destructs
// a set of data members

#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

class Course
{
public:
    Course() { cout << "constructing Course" << endl; }
    ~Course() { cout << "destructing Course" << endl; }
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
    ~Student() { cout << "destructing Student" << endl; }

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
    ~Teacher()
    {
        cout << "destructing Teacher" << endl;
        delete pC;
    }

protected:
    Course *pC;
};

class TutorPair
{
public:
    TutorPair()
    {
        cout << "constructing TutorPair" << endl;
    }
    ~TutorPair() { cout << "destructing TutorPair" << endl; }

protected:
    Student student;
    Teacher teacher;
    int noMeetings;
};

TutorPair *fn()
{
    cout << "creating TutoPair object in function fn()" << endl;
    TutorPair tp;

    cout << "Allocating TutoPair off the heap" << endl;
    TutorPair *pTP = new TutorPair;

    cout << "Returning from fn" << endl;
    return pTP;
}

int main(int nNumberofArgs, char *pszArgs[])
{
    // call function fn() and then return the
    // TutoPair object returned to the heap
    TutorPair *pTPReturned = fn();
    cout << "*Return heap object to the heap" << endl;
    delete pTPReturned;

    // output
    // Creating TutorPair object in function fn()
    // constructing student
    // constructing teacher
    // constructing course
    // constructing tutorpair
    // Allocating TutorPair off the heap
    // constructing student
    // constructing teacher
    // constructing course
    // constructing tutorpair
    // Returning from fn()
    // destructing tutorpair
    // destructing teacher
    // destructing course
    // destructing student
    // Return heap object to the heap
    // destructing tutorpair
    // destructing teacher
    // destructing course
    // destructing student
    // Press any key to continue . . .

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    system("PAUSE");
    return 0;
}