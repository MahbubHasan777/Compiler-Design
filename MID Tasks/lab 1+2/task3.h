/*
3.	Write a program to determine whether the Given Input is Comment line(s) or Not.
e.g.
//single line comment

/* multiple line
Comment */

#ifndef TASK3_H
#define TASK3_H
#include <iostream>
using namespace std;

bool task3()
{
    string str;
    cout << "Write the comment: ";
    getline(cin >> ws, str);
    int len = str.size();
    cout << str[len];
    if (str[0] == '/' && str[1] == '/')
    {
        for (int i = 2; i < len; i++)
        {

            cout << str[i];
        }
        cout << endl;
    }
    else if ((str[0] == '/' && str[1] == '*' && str[len - 2] == '*' && str[len - 1] == '/'))
    {
        for (int i = 2; i < len - 2; i++)
        {

            cout << str[i];
        }
        cout << endl;
    }
}
#endif