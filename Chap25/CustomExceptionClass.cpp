//
// CustomExceptionClass - demonstrate exceptions using
// a factorial function
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <sstream>
using namespace std;

// Exception - generic exception handling class
class Exception
{
public:
    Exception(char *pMsg, int n, char *pFile, int nLine)
        : msg(pMsg), errorValue(n), file(pFile), lineNum(nLine)
    {
    }
    virtual string display()
    {
        ostringstream out;
        out << "Error<" << msg
            << " - value is " << errorValue
            << " >\n ";
        out
            << " @" << file << " - " << lineNum << endl;
        return out.str();
    }

protected:
    // error message
    string msg;
    int errorValue;
    // file name and line number where error occurred
    string file;
    int lineNum;
};

// class InvalidArgumentException : public Exception
// {
// public:
//     InvalidArgumentException(int arg,
//                              char *pFile,
//                              int nLine)
//         : Exception("Invalid argument", pFile, nLine)
//     {
//         invArg = arg;
//     }
//     virtual void display(ostream &out)
//     {
//         Exception::display(out);
//         out << "Argument was " << invArg << endl;
//     }

// protected:
//     int invArg;
// };

// factorial - compute factorial
int factorial(int n)
{
    // you can’t handle negative values of n;
    // better check for that condition first
    if (n < 0)
    {
        throw Exception("Argument for factorial negative",
                        n, __FILE__, __LINE__);
    }
    // go ahead and calculate factorial
    int accum = 1;
    while (n > 0)
    {
        accum *= n;
        n--;
    }
    return accum;
}

int main(int nNumberofArgs, char *pszArgs[])
{
    try
    {
        // this will work
        cout << "Factorial of 3 is " << factorial(3) << endl;
        // this will generate an exception
        cout << "Factorial of - 1 is " << factorial(-1) << endl;
    }
    // control passes here
    catch (Exception e)
    {
        cout << "Error occurred : \n"
             << e.display() << endl;
    }
    // wait until user is ready before terminating program
    // to allow the user to see the program results
    system("PAUSE");
    return 0;
}

// output:
// Factorial of 3 is 6
// Error occurred:
// Error <Argument for factorial negative - value is -1>
// @//cpp_programs/Chap25/CustomExceptionClass.cpp-46
// Press any key to continue . . .