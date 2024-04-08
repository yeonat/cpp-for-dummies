//
// DataSet - store associated data
// in an array of objects
//

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

// NameDataSet - store name and credit card
// information

class NameDataSet
{
public:
    char firstName[128];
    char lastName[128];
    int creditCard;
};

// function prototypes:
bool getDataSet(NameDataSet &nds);
void displayData(NameDataSet &nds);

int main(int nNumberofArgs, char *pszArgs[])
{
    // allocate space for 25 name data sets
    const int MAX = 25;
    NameDataSet nds[MAX];

    // load first names, last names and social
    // security numbers

    cout << "Read name/credit card information\n"
         << "Enter 'exit' to quit"
         << endl;

    int index = 0;
    while (getDataSet(nds[index]) && index < MAX)
    {
        index++;
    }

    // display the names and numbers entered
    cout << "\nEntries: " << endl;
    for (int f = 0; f < index; f++)
    {
        displayData(nds[f]);
    }

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    system("PAUSE");
    return 0;
}

// getData - populate a NameDataSet object
bool getDataSet(NameDataSet &nds)
{
    cout << "Enter first name: ";
    cin >> nds.firstName;

    // compare the name input irrespective of case
    if (strcmp(nds.firstName, "exit") == 0)
    {
        return false;
    }

    cout << "Enter last name: ";
    cin >> nds.lastName;

    cout << "Enter credit card number: ";
    cin >> nds.creditCard;

    return true;
}

// display - display a data set
void displayData(NameDataSet &nds)
{
    cout << "First name: " << nds.firstName << endl;
    cout << "Last name: " << nds.lastName << endl;
    cout << "Credit card: " << nds.creditCard << endl;
}