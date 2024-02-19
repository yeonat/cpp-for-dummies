//
// Program convert temperature from Celsius degree
// units into fahrenheit degree units:
// fahrenheit = celsius * (212 - 32)/100 + 32
//

#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char *pszArgs[])
{
    // enter the temperature in celsius
    int celsius;
    cout << "Enter the temperature in celsius: ";
    cin >> celsius;

    // calculate conversion factor for celsius
    // to fahrenheit
    int factor;
    factor = 212 - 32;

    // use conversion factor to convert celsius
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
}
