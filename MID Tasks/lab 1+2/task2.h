/*
2.	Write a program to determine whether the Given Input is Operators or Not. (Arithmetic Operators +, -, *, /, %, =)
e.g., 2+3=5
Ans:
operator1:  +
operator2:  =
*/
#ifndef TASK2_H
#define TASK2_H

#include <iostream>
using namespace std;

void task2()
{
    string str;
    cout << "Write the expression: ";
    cin >> str;
    int count = 1;
    for (int i = 0; i < str.size(); i++)
    {

        switch (str[i])
        {
        case '+':
        case '-':
        case '*':
        case '/':
        case '%':
        case '=':
            cout << "operator" << count++ << ":" << str[i] << endl;
            break;
        }
    }
}

#endif
