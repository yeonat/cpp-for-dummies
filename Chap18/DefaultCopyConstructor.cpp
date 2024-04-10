// DefaultCopyConstructor - demonstrate that the default copy
// constructor invokes the copy constructor for anu member

#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

const int MAXNAMESIZE = 40;
class Student
{
public:
    // conventional constructor
    Student(char *pName = "no name", int ssId = 0)
    {
        strcpy(name, pName);
        id = ssId;
        cout << "constructed " << name << endl;
    }
    // copy constructor
    Student(Student &s)
    {
        strcpy(name, "Copy of ");
        strcat(name, s.name);
        id = s.id;
        cout << "constructed " << name << endl;
    }
    ~Student()
    {
        cout << "destructing " << name << endl;
    }

protected:
    char name[MAXNAMESIZE];
    int id;
};

class Tutor
{
public:
    Tutor(Student &s) : student(s) // invoke copy
    {
        // constructor on member student
        cout << "constructed Tutor object" << endl;
        id = 0;
    }

protected:
    Student student;
    int id;
};

void fn(Tutor tutor)
{
    cout << "In function fn()" << endl;
}

int main(int argcs, char *pArgs[])
{
    Student chester("Chester");
    Tutor tutor(chester);
    cout << "Calling fn()" << endl;
    fn(tutor);
    cout << "Returned from fn()" << endl;

    // constructed Chester
    // constructed Copy of Chester
    // constructing Tutor object
    // Calling fn()
    // constructed Copy of Copy of Chester
    // In function fn()
    // destructing Copy of Copy of Chester
    // Returned from fn()
    // Press any key to continue . . .

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    system("PAUSE");
    return 0;
}