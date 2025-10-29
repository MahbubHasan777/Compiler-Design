#include <iostream>
#include <limits>
#include "task1.h"
#include "task2.h"
#include "task3.h"
#include "task3beta.h"
#include "task4.h"
#include "task5.h"
#include "task6.h"
#include "task7.h"
using namespace std;

void repeatTask(int input)
{
    switch (input)
    {
    case 1:
        task1();
        break;
    case 2:
        task2();
        break;
    case 3:
        task3();
        break;
    case 4:
        task4();
        break;
    case 5:
        task5();
        break;
    case 6:
        task6();
        break;
    case 7:
        task7();
        break;
    case 8:
        task3beta();
        break;
    case 10:
        cout << "1: Check numerical or, not" << endl;
        cout << "2: Determine Operator (+, -, *, /, %, =)" << endl;
        cout << "3: Determine comment or not." << endl;
        cout << "4: Check identifer or not." << endl;
        cout << "5: Find average of an array." << endl;
        cout << "6: Find minimum and maximum value of an array" << endl;
        cout << "7: Concat firstname and lastname." << endl;
        cout << "8: (Extra)Print comment if valid." << endl;
        cout << "9: Exit." << endl;
        cout << "10: Print Option." << endl;
        break;
    default:
        cout << "Invalid option.";
        break;
    }
}

int main()
{
    cout << "1: Check numerical or, not" << endl;
    cout << "2: Determine Operator (+, -, *, /, %, =)" << endl;
    cout << "3: Determine comment or not." << endl;
    cout << "4: Check identifer or not." << endl;
    cout << "5: Find average of an array." << endl;
    cout << "6: Find minimum and maximum value of an array" << endl;
    cout << "7: Concat firstname and lastname." << endl;
    cout << "8: (Extra)Print comment if valid." << endl;
    cout << "9: Exit." << endl;
    cout << "10: Print Option." << endl;
    while (1)
    {
        cout << endl;
        int input;
        cout << "\nEnter task number (10 for printing options): ";
        if (!(cin >> input)) // check if input failed
        {
            cout << "Invalid input! Please enter a number." << endl;
            cin.clear();
            cin.ignore(99999, '\n');
            continue;
        }
        cout << endl;
        if (input == 9)
            break;
        repeatTask(input);
    }
}