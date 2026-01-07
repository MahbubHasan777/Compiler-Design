#include <iostream>
using namespace std;

bool computeDFA()
{
    string s;
    cout << "Enter String: ";
    cin.ignore();
    cin >> s;

    if(s == "q") exit(0);

    string state = "QA";

    for (int i = 0; i < s.size(); i++)
    {
        cout << state << " ";
        if (s[i] == 'a')
        {
            if (state == "QA" || state == "QC")
                state = "QB";
            else if (state == "QB" || state == "QD" || state == "QG" || state == "QH")
                state = "QD";
            else if (state == "QE")
                state = "QF";
            else if (state == "QF")
                state = "QG";
        }
        else if (s[i] == 'b')
        {
            if (state == "QA" || state == "QC")
                state = "QC";
            else if (state == "QB" || state == "QD" || state == "QG" || state == "QH")
                state = "QE";
            else if (state == "QF")
                state = "QH";
            else if (state == "QE")
                return false;
        }else{
            return false;
        }
    }
    cout << state << "\t";

    if (state == "QB" || state == "QD" || state == "QG" || state == "QH")
        return true;

    return false;
}

int main()
{

    while (true)
    {
        bool isValid = computeDFA();

        cout << ((isValid) ? "Accepted" : "Not Accepted\n") << endl;
    }
}