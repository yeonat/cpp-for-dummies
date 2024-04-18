// InheritanceExample - demonstrate an inheritance relationship
// in which the subclass constructor passes argument information
// to the constructor in the base class

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <String>

using namespace std;

// advisor - empty class
class Advisor
{
};

const int MAX_NAME_SIZE = 40;
class Student
{
public:
    Student(char *pName = "no name") : average(0.0), semesterHours(0)
    {
        strncpy(name, pName, MAX_NAME_SIZE);
        name[MAX_NAME_SIZE - 1] = '\0';
        cout << "constructing Student " << name << endl;
    }

    void addCourse(int hours, float grade)
    {
        cout << "adding grade to " << name << endl;
        average = (semesterHours * average + grade);
        semesterHours += hours;
        average = average / semesterHours;
    }

    int hours() { return semesterHours; }
    float gpa() { return average; }

protected:
    char name[MAX_NAME_SIZE];
    int semesterHours;
    float average;
};

class GraduateStudent : public Student
{
public:
    GraduateStudent(char *pName, Advisor &adv, float qG = 0.0)
        : Student(pName), advisor(adv), qualifierGrade(qG)
    {
        cout << "constructing graduate student " << pName << endl;
    }

    float qualifier() { return qualifierGrade; }

protected:
    Advisor advisor;
    float qualifierGrade;
};

int main(int nNumberofArgs, char *pszArgs[])
{
    Advisor advisor;
    // create two Student types
    Student llu("Cy N Sense");
    GraduateStudent gs("Matt Madox", advisor, 1.5);
    // now add a grade to their grade point average
    llu.addCourse(3, 2.5);
    gs.addCourse(3, 3.0);
    // display the graduate student’s qualifier grade
    cout << "Matt’s qualifier grade = "
         << gs.qualifier()
         << endl;
    // wait until user is ready before terminating program
    // to allow the user to see the program results
    system("PAUSE");
    return 0;
}

// output:
// constructing student Cy N Sense
// constructing student Matt Madox
// constructing graduate student Matt Madox
// adding grade to Cy N Sense
// adding grade to Matt Madox
// Matt’s qualifier grade = 1.5
// Press any key to continue . . .