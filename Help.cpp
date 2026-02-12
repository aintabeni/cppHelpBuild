#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    short choice;
    cout << "Get help on:\n"
         << "1. If\n"
         << "2. Else\n"
         << "3. For\n"
         << "4. While\n"
         << "5. Do-while\n"
         << "Choose One: \n";
    do
    {
        // Getting the user choice
    
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
    case 3:
        cout << "Using for(initialization; conditional ; iteration){\n"
             << "\t...\n"
             << "\t...\n"
             << "\t...\n"
             << "\t}";
    break;
    case 4:
        cout << "Using while(conditional){\n"
             << "\t...\n"
             << "\t...\n"
             << "\titeration;\n"
             << "\t}";
    break;
    case 5:
        cout << "Using do{\n"
             << "\t...\n"
             << "\t...\n"
             << "\titeration;\n"
             << "\t}while(conditional)\n";
    break;
    default:
        cout << "Selection not found. Please choose a number between 1-5.\n";
    }
    } while (choice < 1 || choice > 5);
    
    
}
