/*
4.	Write a program to determine whether the Given Input is Identifier or Not. []
Conditions/convention to detect identifier:
a)	The first character should be alphabet characters/underscore (A-Z, a-z, _)
b)	From the Second character should be alpha-numeric characters/underscore (A-Z, a-z, _ , 0-9)
*/

#include <iostream>
using namespace std;

void isIndentifier(string s)
{

    bool isValid = true;

    switch (s[0]) {
        case 'A'...'Z':
        case 'a'...'z':
        case '_':
            break;
        default:
            isValid = false;
    }

    for (int i = 1; i < s.length() && isValid; i++) {
        switch (s[i]) {
            case 'A'...'Z':
            case 'a'...'z':
            case '0'...'9':
            case '_':
                break; // valid character
            default:
                isValid = false;
        }
    }

    if (isValid)
        cout << s << " is a valid identifier." << endl;
    else
        cout << s << " is NOT a valid identifier." << endl;
}

int main() {
    
    isIndentifier("1234aa");
    isIndentifier("_var");
    isIndentifier("&var");
    isIndentifier("var123");
    return 0;
}