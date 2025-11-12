#include <iostream>
#include <fstream>
using namespace std;

void checkIndentifier(string str)
{
    bool isValid = true;

    switch (str[0]) {
        case 'A'...'Z':
        case 'a'...'z':
        case '_':
            break;
        default:
            isValid = false;
    }

    for (int i = 1; i < str.length() && isValid; i++) {
        switch (str[i]) {
            case 'A'...'Z':
            case 'a'...'z':
            case '0'...'9':
            case '_':
                break;
            default:
                isValid = false;
        }
    }

    if (isValid)
        cout << str << " is a valid identifier." << endl;
    else
        cout << str << " is NOT a valid identifier." << endl;
}


int main()
{
    ifstream file1("sample.txt");
    string strLine;
    while(getline(file1, strLine)){
        checkIndentifier(strLine);
    }

    return 0;
}