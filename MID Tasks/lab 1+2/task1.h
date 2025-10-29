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
    bool isNumber = true;
    for (int i = 0; i < str.size(); i++)
    {
        if (!(str[i] >= '0' && str[i] <= '9'))
        {
            isNumber = false;
        }
    }
    cout << (isNumber ? "numeric constant" : "not numeric") << endl;
}

#endif