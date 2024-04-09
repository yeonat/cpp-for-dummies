// ConstructStatic -demonstrate that statics are only
// constructed once

#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

class DoNothing
{
public:
    DoNothing(int initial)
    {
        cout << "DoNothing constructed with a value of " << initial << endl;
    }
};

void fn(int i)
{
    cout << "Function fn passed a value of " << i << endl;
    static DoNothing dn(i);
}

int main(int nNumberofArgs, char *pszArgs[])
{
    fn(10);
    fn(20);

    // output
    // Function fn passed a value of 10
    // DoNothing constructed with a value of 10
    // Function fn passed a value of 20
    // Press any key to continue . . .

    // wait until user is ready before terminating program
    // to allow the user to see the program results

    system("PAUSE");
    return 0;
}