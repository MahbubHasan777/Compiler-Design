#include <iostream>
using namespace std;

int countNewLines(string text)
{
    int count = 0;

    for (char c : text)
    {
        if (c == '\n')
            count++;
    }

    return count;
}

void task3()
{
    string str = "";

    string lineInput;

    cout << "Enter Your comment: " << endl;
    cin.ignore();
    while (true)
    {
        getline(cin, lineInput);
        if (lineInput.empty())
            break;
        str += lineInput + "\n";
    }

    int loc = countNewLines(str);

    bool isSingleComment = false;
    bool isDoubleComment = false;

    if (loc == 1)
    {
        if (str.size() >= 2 && str[0] == '/' && str[1] == '/')
        {

            cout << "Singleline Comment detected." << endl;

            cout << "The comment is:" << endl;

            cout << str.substr(2) << endl;

            isSingleComment = true;
        }
    }
    if (loc >= 1)
    {
        if (str.size() >= 5 && str[0] == '/' && str[1] == '*' && str[str.size() - 3] == '*' && str[str.size() - 2] == '/')
        {

            cout << "Multiline Comment detected." << endl;

            cout << "Comment is:" << endl;

            cout << str.substr(2, str.size() - 5) << endl;

            isDoubleComment = true;
        }
    }

    if (!isSingleComment && !isDoubleComment)
    {
        cout << "No comment detected\n" << endl;
    }
}

int main()
{
    task3();
}