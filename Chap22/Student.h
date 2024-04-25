// Student - basic student
#ifndef _STUDENT_
#define _STUDENT_

namespace Schools
{
    class Student
    {
    public:
        Student(char *pszName, int nID);
        virtual char *display();

    protected:
        // student’s name
        char *pszName;
        int nID;
    };
}
#endif
