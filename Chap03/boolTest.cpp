//
// BoolTest - compare variables input form the
// keyboard and store the results off into a logical variable
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char *pszArgs[])
{
    // Set output format for bool variables
    // to true and false instead
    // of 1 and 0
    cout.setf(ios::boolalpha); // The first line cout.setf() makes sure that our bool variable b is output as “true” or “false”
    // initialize two arguments
    int nArg1;
    cout << "Input value1 : ";
    cin >> nArg1;

    int nArg2;
    cout << "Input value2 : ";
    cin >> nArg2;

    bool b;
    b = (nArg1 == nArg2);

    cout << "The statement, " << nArg1
         << " equals " << nArg2
         << " is " << b
         << endl;

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    system("PAUSE");
    return 0;
}