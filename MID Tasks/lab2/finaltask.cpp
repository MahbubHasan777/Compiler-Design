#include <iostream>
using namespace std;

bool isNumber(string str)
{
    for (int i = 0; i < str.size(); i++)
    {
        if (!(str[i] >= '0' && str[i] <= '9'))
        {
            cout << (isNumber(str) ? "numeric constant" : "not numeric") << endl;
            return false;
        }
    }
    return true;
}

