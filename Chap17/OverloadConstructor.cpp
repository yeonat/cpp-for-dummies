// OverloadConstructor - provide the class multiple ways to create objects by
// overloading the constructor

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

const int MAXNAMESIZE = 40;
class Student
{
public:
    Student()
    {
        cout << "constructing Student" << endl;
        semesterHours = 0;
        gpa = 0.0;
        name[0] = '\0'; // empty string
    }

    Student(char *pName)
    {
        cout << "constructing Student " << pName << endl;
        strncpy(name, pName, MAXNAMESIZE);
        name[MAXNAMESIZE - 1] = '\0';
        semesterHours = 0;
        gpa = 0.0;
    }

    Student(char *pName, int xfrHours, float xfrGPA)
    {
        cout << "constructing Student " << pName << endl;
        strncpy(name, pName, MAXNAMESIZE);
        name[MAXNAMESIZE - 1] = '\0';
        semesterHours = xfrHours;
        gpa = xfrGPA;
    }
    ~Student()
    {
        cout << "destructing Student" << endl;
    }
    // ...other public members...
protected:
    char name[MAXNAMESIZE];
    int semesterHours;
    float gpa;
};

int main(int nNumberofArgs, char *pszArgs[])
{
    // the following invokes three different constructors
    Student noName;
    Student freshman("Marian Haste");
    Student xferStudent("Pikumup Andropov", 80, 2.5);

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    system("PAUSE");
    return 0;
}