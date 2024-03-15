//
// NestedDemo - input a series of numbers.
// continue to accumulate the sum of these numbers
// until the user enters a 0. Repeat the process
// until te sum is 0.
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char *pszArgs[])
{
    // the other loop
    int accumulator = 0;
    cout << "This program sums multiple series\n "
         << "of numbers. Terminate each sequence\n"
         << "By entering a negative number.\n"
         << "Terminate the program by entering a two\n"
         << "negative numbers in a row.\n";

    // continue to accumulate sequences
    int accumulator;
    do
    {
        // start entering the next sequence
        // of numbers
        accumulator = 0;
        cout << "Start the next sequence\n";
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
        // output the accumulated result...
        cout << "\nThe total for this sequence is" << accumulator << endl;

        // ...and start over with a new sequence
        // if the accumulator sequence was not zero
    } while (accumulator != 0);

    // we're about to quit
    cout << "\nthank you" << endl;

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    system("PAUSE");
    return 0;
}