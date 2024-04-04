//
// SquareDemo - demonstrate the use of functions
// which processes arguments
//

#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

// Square - return the square of its argument
// doubleVar - the value to be squared
// return - the square of doubleVar

double square(double doubleVar)
{
    return doubleVar * doubleVar;
}

double sumSequence(void)
{
    // loop forever
    double accumulator = 0.0;
    for (;;)
    {
        // fetch another number
        double dValue = 0;
        cout << "Enter next number: ";
        cin >> dValue;

        // if it's negative...
        if (dValue < 0)
        {
            // ...exit the loop
            break;
        }

        // ...otherwise, calculate square
        double value = square(dValue);

        // now add the square to the
        // accumulator
        accumulator = accumulator + value;
    }

    // return the accumulated value
    return accumulator;
}

int main(int nNumberofArgs, char *pszArgs[])
{
    cout << "This program sums multiple series\n "
         << "of numbers. Terminate each sequence\n"
         << "By entering a negative number.\n"
         << "Terminate the series by entering a two\n"
         << "negative numbers in a row.\n"
         << endl;

    // accumulate sequence of numbers...
    double accumulatedValue;
    for (;;)
    {
        // sum a sequence of numbers entered from the keyboard
        cout << "Enter next sequence " << endl;
        accumulatedValue = sumSequence();

        // terminate the loop if sumSequence() return a zero
        if (accumulatedValue <= 0.0)
        {
            // ...exit the loop
            break;
        }

        // now output the accumulated result
        cout << "\nThe total is "
             << accumulatedValue
             << "\n"
             << endl;
    }

    // we're about to quit
    cout << "\nthank you" << endl;

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    system("PAUSE");
    return 0;
}