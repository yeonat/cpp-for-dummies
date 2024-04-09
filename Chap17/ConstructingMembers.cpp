// ConstructingMembers - a class may pass along arguments
// to its members' constructor

#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

const int MAXNAMESIZE = 40;

int nextStudentId = 0;

class StudentId
{
public:
    StudentId()
    {
        value = ++nextStudentId;
        cout << "Assigning student id " << value << endl;
    }

protected:
    int value;
};

class Student
{
public:
    Student(char *pName)
    {
        strncpy(name, pName, MAXNAMESIZE);
        name[MAXNAMESIZE - 1] = '\0';
        semesterHours = 0;
        gpa = 0.0;
    }
    // ...other public members...
protected:
    char name[MAXNAMESIZE];
    int semesterHours;
    float gpa;
    StudentId id;
};

int main(int nNumberofArgs, char *pszArgs[])
{
    Student s("Chester");
    // output
    // assigning student id 1
    // constructing Student Chester
    // Press any key to continue . . .

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    system("PAUSE");
    return 0;
}