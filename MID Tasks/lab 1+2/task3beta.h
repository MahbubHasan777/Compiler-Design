/*
3.	Write a program to determine whether the Given Input is Comment line(s) or Not.
e.g.
//single line comment

/* multiple line
Comment */

#ifndef TASK3BETA_H
#define TASK3BETA_H

#include <iostream>
using namespace std;

bool task3beta()
{
    string str;
    cout << "Write the comment: ";
    getline(cin >> ws, str);
    bool check = false;
    int len = str.size();
    cout << str[len];
    if (str[0] == '/' && str[1] == '/')
    {
        check = true;
    }
    else if ((str[0] == '/' && str[1] == '*' && str[len - 2] == '*' && str[len - 1] == '/'))
    {
        check = true;
    }

    if(check){
        cout << "comment" << endl;
    }else{
        cout << "not comment" << endl;
    }
}

#endif