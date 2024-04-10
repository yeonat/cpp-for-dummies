// CopyConstructor - demonstrate an example copy constructor

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

// fn - receives its argument by value
void fn(Student copy)
{
    cout << "In function fn()" << endl;
}

int main(int nNumberofArgs, char *pszArgs[])
{
    Student chester("Chester", 1234);
    cout << "Calling fn()" << endl;
    fn(chester);
    cout << "Returned from fn()" << endl;

    // constructed Chester
    // Calling fn()
    // constructed Copy of Chester
    // In function fn()
    // destructing Copy of Chester
    // Returned from fn()
    // Press any key to continue . . .

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    system("PAUSE");
    return 0;
}