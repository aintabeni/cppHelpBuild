#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    // Getting the user choice
    short choice;
    cout << "Get help on:\n"
         << "1. If\n"
         << "2. Else\n"
         << "Choose One: \n";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Using if(statement)\n"
             << "\telse(statement)\n";
        break;
    case 2:
        cout << "Using switch(expression){\n"
             << "\tcase constant;\n"
             << "\tstatement;\n"
             << "\tbreak;\n"
             << "\t}";
        break;
    default:
        cout << "Selection not found";
    }
}
