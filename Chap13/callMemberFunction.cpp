//
// CallMemberFunction - define and invoke a function that's
// a member of a class Student
//

#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

class Student
{
public:
    // add a completed course to the record
    float addCourse(int hours, float grade)
    {
        // calculate the sum of all courses times
        // the average grade
        float weightedGPA;
        weightedGPA = semesterHours * gpa;

        // now add int the new course
        semesterHours += hours;
        weightedGPA += grade * hours;
        hours = weightedGPA / semesterHours;

        // return the new GPA
        return gpa;
    }

    int semesterHours;
    float gpa;
};

int main(int nNumberofArgs, char *pszArgs[])
{
    Student s;
    s.semesterHours = 10;
    s.gpa = 3.0;

    // the values before the call
    cout << "Before: " << s.semesterHours << " hours, "
         << s.gpa << " GPA" << endl;

    // the following subjects the data members of the s
    // object to the member function addCourse()
    s.addCourse(3, 4.0); // call the member function

    // the values are now changed
    cout << "After: " << s.semesterHours << " hours, "
         << s.gpa << " GPA" << endl;

    // access another object just for the heck of it
    Student t;
    t.semesterHours = 6;
    t.gpa = 1.0;         // not doing so good
    t.addCourse(3, 1.5); // things aren't getting any better

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    return 0;

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    system("PAUSE");
    return 0;
}