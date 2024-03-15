//
// BranchDemo - input two numbers. go down one path of the
// program if the first argument is greater than the first or the other
// path if not
//
// the following include files define the majority of
// functions that any given program will need
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char *pszArgs[])
{
    // input the first argument...
    int arg1;
    cout << "Enter arg1: ";
    cin >> arg1;

    // ...and the second
    int arg2;
    cout << "Enter arg2: ";
    cin >> arg2;

    // now decide what to do:
    if (arg1 > arg2)
    {
        cout << "arg1 is greater than arg2\n";
    }
    else
    {
        cout << "arg1 is less than or equal to arg2\n";
    }

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    system("PAUSE");
    return 0;
}