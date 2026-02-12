#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    for (;;)
    {
        char choice;
        do
        {
            cout << "Get help on:\n"
                 << "1. If\n"
                 << "2. Else\n"
                 << "3. For\n"
                 << "4. While\n"
                 << "5. Do-while\n"
                 << "6. Continue\n"
                 << "7. Go-to\n"
                 << "8. Break\n"
                 << "Choose One To Get It's Syntax: (q to quit)\n";
            // Getting the user choice
            cin >> choice;
        } while ((choice < '1' || choice > '5') && (choice != 'q'));
        if (choice == 'q')
        {
            cout << "You have chose to quit.\n";
            break;
        }
        switch (choice)
        {
        case '1':
            cout << "Using if(statement)\n"
                 << "\telse(statement)\n";
            break;
        case '2':
            cout << "Using switch(expression){\n"
                 << "\tcase constant;\n"
                 << "\tstatement;\n"
                 << "\tbreak;\n"
                 << "\t}";
            break;
        case '3':
            cout << "Using for(initialization; conditional ; iteration){\n"
                 << "\t...\n"
                 << "\t...\n"
                 << "\t...\n"
                 << "\t}";
            break;
        case '4':
            cout << "Using while(conditional){\n"
                 << "\t...\n"
                 << "\t...\n"
                 << "\titeration;\n"
                 << "\t}";
            break;
        case '5':
            cout << "Using do{\n"
                 << "\t...\n"
                 << "\t...\n"
                 << "\titeration;\n"
                 << "\t}while(conditional)\n";
            break;
        case '6':
            cout << "do{\n"
                 << "\t...\n"
                 << "\tif(condition) continue;\n"
                 << "\titeration;\n"
                 << "\t}while(conditional)\n";
            break;
        case '7':
            cout << "do{\n"
                 << "\t...\n"
                 << "\tif(condition) break;\n"
                 << "\titeration;\n"
                 << "\t}while(conditional)\n";
            break;
        case '8':
            cout << "do{\n"
                 << "\t...\n"
                 << "\tif(condition) goto skip;\n"
                 << "\titeration;\n"
                 << "\t}while(conditional)\n"
                 << "skip:"
                 << "//You will come here";
            break;

        default:
            cout << "Selection not found. Please choose a number between 1-5.\n";
        }
    }
}
