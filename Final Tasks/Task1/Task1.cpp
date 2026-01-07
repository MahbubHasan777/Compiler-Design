// 1. R.E = a*
// 2. R.E = a+b
// 3. R.E = a.b
// 4. R.E = (a+b).(a+b)
// 5. R.E = (a+b)*b(a+b)

#include <iostream>
using namespace std;
//a*
bool AstarAlone(string str)
{
    int count = str.size()-1;
    int index = 0;
    if (str == "")
    {
        return true;
    }
    while (count >= index)
    {
        if (str[index++] == 'a')
            continue;
        else
            return false;
    }
    return true;
}

//a+b
bool PlusAlone(string str)
{
    if(str.size() == 1 && (str[0] == 'a' || str[0] == 'b'))
        return true;

    return false;
}

//a.b
bool DotAlone(string str)
{
    if(str.size() == 2 && str[0] == 'a' && str[1] == 'b')
        return true;

    return false;
}

// (a+b).(a+b)
bool MultiplePlus(string str)
{
    if(str.size() == 2 && (str[0] == 'a' || str[0] == 'b') && (str[1] == 'a' || str[1] == 'b'))
        return true;

    return false;
}

//(a+b)*b(a+b)
bool MultipleOperation(string str)
{
    if(str.size() < 2)
        return false;

    int n = str.size();

    if(!((str[n-1] == 'a' || str[n-1] == 'b') && str[n-2] == 'b'))
        return false;
    int isValid = 0;
    for(int i = 0; i < str.size()-2;i++){
        if(!(str[i] == 'a' || str[i] == 'b'))
            return false;
    }
    return true;
}

int main()
{
    cout << MultipleOperation("ababb") << endl;
}