/*1.	Write a program to determine whether the Given Input is Numeric Constant or Not.
e.g. (if 100, 991, 1810 etc are given as an input , then the program says “numeric constant”, or if we take input as “ABCD”, “A1B2”, then the program will say that this is “not numeric”).
*/
#ifndef TASK1_H
#define TASK1_H

#include <iostream>
using namespace std;

void task1()
{
    string str;
    cout << "Write the value: ";
    cin >> str;

    bool isFloat = false;
    bool isNumber = true;

    if (!(
            str[0] == '-' ||
            str[0] == '+' ||
            (str[0] >= '0' && str[0] <= '9')

                ))
    {
        cout << "Not Numeric" << endl;
        return;
    }

    for (int i = 1; i < str.size(); i++)
    {
        if ((str[i] >= '0' && str[i] <= '9'))
        {
            continue;
        }
        if (str[i] == '.')
        {
            if (!isFloat)
            {
                isFloat = true;
                continue;
            }
            else
            {
                cout << "Not Numeric." << endl;
                isNumber = false;
                break;
            }
        }

        cout << "Not Numeric" << endl;
        isNumber = false;
        break;
    }

    if (isNumber)
    {
        cout << "Numeric" << endl;
    }
    return;
}

#endif