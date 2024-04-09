// ConstructingMembers - a class may pass along arguments
// to its members' constructor

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;
const int MAXNAMESIZE = 40;
class StudentId
{
public:
    StudentId(int id = 0)
    {
        value = id;
        cout << "Assigning student id " << value << endl;
    }

protected:
    int value;
};

class Student
{
public:
    Student(char *pName = "no name", int ssId = 0) : id(ssId)
    {
        cout << "constructing Student " << pName << endl;
        strncpy(name, pName, MAXNAMESIZE);
        name[MAXNAMESIZE - 1] = '\0';
    }
    // ...other public members...
protected:
    char name[MAXNAMESIZE];
    StudentId id;
};

int main(int nNumberofArgs, char *pszArgs[])
{
    Student s("Chester", 1234);
    // output
    // assigning student id 1234
    // constructing student Chester
    // This message from main
    // Press any key to continue . . .

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    system("PAUSE");
    return 0;
}