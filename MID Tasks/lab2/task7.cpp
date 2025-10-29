// 7.	Take two strings as your first and last name, then concatenate the two strings together so that you can find your full name:
// e.g. First name = “XX” and Lastname = “YY”
// output: full name = “XX YY”

#include <iostream>
using namespace std;

string concatName(string fname, string lname)
{
    return fname + " " + lname;
}

int main()
{
    string concats = concatName("Mahbub", "Hasan");
    cout << concats << endl;

    return 0;
}
