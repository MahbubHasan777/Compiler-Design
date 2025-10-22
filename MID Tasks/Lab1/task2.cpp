/*
2.	Write a program to determine whether the Given Input is Operators or Not. (Arithmetic Operators +, -, *, /, %, =)
e.g., 2+3=5
Ans:
operator1:  +
operator2:  =
*/

#include <iostream>
using namespace std;

void printOperator(string str)
{
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

int main()
{
    printOperator("(2+3)*5/6=5");
}