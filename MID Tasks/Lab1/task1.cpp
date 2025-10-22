/*1.	Write a program to determine whether the Given Input is Numeric Constant or Not.
e.g. (if 100, 991, 1810 etc are given as an input , then the program says “numeric constant”, or if we take input as “ABCD”, “A1B2”, then the program will say that this is “not numeric”).
*/

#include <iostream>
using namespace std;

bool isNumber(string str)
{
    for (int i = 0; i < str.size(); i++)
    {
        if(!(str[i] >= '0' && str[i] <= '9')){
            return false;
        }
    }

    return true;
}

void msgPrint(string str){
    cout << (isNumber(str) ? "numeric constant" : "not numeric") << endl;
}

int main()
{
    msgPrint("1601");
    msgPrint("18598");
    msgPrint("ASeas451ASn");
}