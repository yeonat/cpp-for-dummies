// ConvertProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Program to convert temperature from Fahrenheit to Celsius degree
// units into Fahrenheit degree units
// Fahrenheit = Celsius * (212 - 32) / 100 + 32 //   (9/5) + 32

#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
    // enter the temperature in Celsius
    int celsius;
    cout << "Enter the temperature in Celsius: ";
    cin >> celsius;

    // calculate conversion factor for Celsius
    // to Fahrenheit
    int factor;
    factor = 212 - 32;

    // use conversion factor to convert Celsius
    // into fahrenheit values
    int fahrenheit;
    fahrenheit = factor * celsius / 100 + 32;

    // output the results (followed by a NewLine)
    cout << "Fahrenheit value is: ";
    cout << fahrenheit << endl;

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    system("PAUSE");
    return 0;

    // std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
