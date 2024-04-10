// ShallowCopy - performing a byte-by-byte (shallow) copy
// is not correct when the class holds assets

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <String>
using namespace std;

class Person
{
public:
    Person(char *pN)
    {
        cout << "constructing " << pN << endl;
        pName = new char[strlen(pN) + 1];
        if (pName != 0)
        {
            strcpy(pName, pN);
        }
    }
    ~Person()
    {
        cout << "destructing " << pName << endl;
        strcpy(pName, "already destructed memory");
        // delete pName;
    }

protected:
    char *pName;
};

void fn()
{
    // create a new object
    Person p1("This_is_a_ver_long_name");

    // copy the contents of p1 into p2
    Person p2(p1);
}

int main(int argcs, char *pArgs[])
{
    cout << "Calling fn()" << endl;
    fn();
    cout << "Returned from fn()" << endl;

    // Calling fn()
    // constructing This_is_a_very_long_name
    // destructing This_is_a_very_long_name
    // destructing already destructed memory
    // Returned from fn()
    // Press any key to continue . . .

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    system("PAUSE");
    return 0;
}