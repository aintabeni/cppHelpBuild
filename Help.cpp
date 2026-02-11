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
    cout << choice;
}
