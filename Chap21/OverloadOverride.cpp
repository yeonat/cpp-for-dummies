// OverloadOverride - demonstrate when a function is declare-time
// overloaded vs. runtime overridden

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

class Student
{
public:
    float calcTuition()
    {
        cout << "We're in Student::calcTuition()" << endl;
        return 0;
    }
};

class GraduateStudent : public Student
{
public:
    float calcTuition()
    {
        cout << "We're in GraduateStudent::calcTuition()" << endl;
        return 0;
    }
};

void fn(Student &x)
{
    x.calcTuition(); // to which calcTuition() does this refer?
}

int main(int nNumberofArgs, char *pszArgs[])
{
    // pass a base class object to function
    // (to match the declaration)
    Student s;
    fn(s);
    // pass a specialization of the base class instead
    GraduateStudent gs;
    fn(gs);
    // wait until user is ready before terminating program
    // to allow the user to see the program results
    system("PAUSE");
    return 0;
}

// Output:
// We’re in Student::calcTuition
// We’re in Student::calcTuition
// Press any key to continue . . .

// Executing the OverloadOveride program with calcTuition() declared virtual generates the following output:
// We’re in Student::calcTuition
// We’re in GraduateStudent::calcTuition
// Press any key to continue . . .
