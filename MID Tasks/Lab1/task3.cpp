/*
3.	Write a program to determine whether the Given Input is Comment line(s) or Not.
e.g.
//single line comment

/* multiple line
Comment */

#include <iostream>
using namespace std;

bool checkComment(string str)
{
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
        for (int i = 2; i < len-2; i++)
        {

            cout << str[i];
        }
        cout << endl;
    }
}

int main()
{
    checkComment("//This is comment single line");
    checkComment("/*This is comment multi line*/");
    checkComment("/*This is not comment");
    checkComment("This is not comment*/");
}