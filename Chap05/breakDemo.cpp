//
// BreakDemo - input a loop count. Loop for
// outputting a string arg number of times.
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char *pszArgs[])
{
    // input the loop count
    int accumulator = 0;
    cout << "This program sums values entered "
         << "By the user\n";
    cout << "Terminate the loop by entering a negative number\n";

    // loop "forever"
    for (;;)
    {
        // fetch another number
        int value = 0;
        cout << "Enter next number: ";
        cin >> value;

        // if it's negative...
        if (value < 0)
        {
            // ...exit the loop
            break;
        }

        // ...otherwise, add the value to the accumulator
        accumulator = accumulator + value;
    }

    // now that we've exited the loop, output the result
    cout << "\nThe total is " << accumulator << endl;

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    system("PAUSE");
    return 0;
}