// PassObjVal - attempts to change the value of an object
// in a function fail when the object is passed by value

#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

class Student
{
public:
    int semesterHours;
    float gpa;
};

void someFn(Student *pS)
{
    pS->semesterHours = 10;
    pS->gpa = 3.0;

    cout << "the value of copyS.gpa is " << pS->gpa << "\n";
}

int main(int nNumberofArgs, char *pszArgs[])
{
    Student s;
    s.gpa = 0.0;

    // display the value of s.gpa before calling someFn()
    cout << "the value of s.gpa is " << s.gpa << "\n";

    // pass the address of the existing object
    cout << "Calling someFn(Student*)\n";
    someFn(&s);
    cout << "returned from someFn(Student*) " << s.gpa << "\n";

    // the value of s.gpa remains 3.0
    cout << "the value of s.gpa is " << s.gpa << "\n";

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    system("PAUSE");
    return 0;
}