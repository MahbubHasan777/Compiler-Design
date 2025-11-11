/*
4.	Write a program to determine whether the Given Input is Identifier or Not. []
Conditions/convention to detect identifier:
a)	The first character should be alphabet characters/underscore (A-Z, a-z, _)
b)	From the Second character should be alpha-numeric characters/underscore (A-Z, a-z, _ , 0-9)
*/

#ifndef TASK4_H
#define TASK4_H

#include <iostream>
using namespace std;

void task4()
{
    string str;
    cout << "Enter indentifier name: ";
    cin >> str;
    bool isValid = true;

    switch (str[0]) {
        case 'A'...'Z':
        case 'a'...'z':
        case '_':
            break;
        default:
            isValid = false;
    }

    for (int i = 1; i < str.length() && isValid; i++) {
        switch (str[i]) {
            case 'A'...'Z':
            case 'a'...'z':
            case '0'...'9':
            case '_':
                break;
            default:
                isValid = false;
        }
    }

    if (isValid)
        cout << str << " is a valid identifier." << endl;
    else
        cout << str << " is NOT a valid identifier." << endl;
}

#endif