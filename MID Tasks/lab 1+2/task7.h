// 7.	Take two strings as your first and last name, then concatenate the two strings together so that you can find your full name:
// e.g. First name = “XX” and Lastname = “YY”
// output: full name = “XX YY”
#ifndef TASK7_H
#define TASK7_H

#include <iostream>
using namespace std;

void task7()
{
    string fname, lname;
    cout << "Enter first name: ";
    cin >> fname;
    cout << "Enter last name: ";
    cin >> lname;
    cout << fname + " " + lname << endl;
}

#endif