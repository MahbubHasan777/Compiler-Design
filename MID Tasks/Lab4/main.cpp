#include <iostream>
#include <cctype>
#include <vector>
#include <fstream>

using namespace std;

struct TokenPair
{
    string token;
    string type;

    TokenPair() {}
    TokenPair(string token, string type)
    {
        this->token = token;
        this->type = type;
    }
};

string keywords[] = {
    "main",
    "int",
    "float",
    "double",
    "string",
    "char",
    "bool",
    "return",
    "if",
    "else",
    "elseif"
    "while",
    "for",
    "continue",
    "break"};

bool isKeyword(string token)
{
    for (auto i : keywords)
    {
        if (i == token)
            return true;
    }
    return false;
}

void LexicalAnalyzer(string str)
{
    vector<TokenPair> tokenPair;
    for (int i = 0; i < str.size(); i++)
    {
        if (isspace(str[i]))
            continue;

        else if (isalpha(str[i]) || str[i] == '_')
        {
            string token = "";
            TokenPair t;
            token += str[i++];

            while (isalnum(str[i]) || str[i] == '_')
            {
                token += str[i++];
            }
            i--;

            if (isKeyword(token))
            {
                t.token = token;
                t.type = "keyword";
            }
            else
            {
                t.token = token;
                t.type = "identifier";
            }

            tokenPair.push_back(t);
        }

        else if (isdigit(str[i]) || str[i] == '.')
        {
            string token = "";
            TokenPair t;
            token += str[i++];

            while (isdigit(str[i]) || str[i] == '.')
            {
                token += str[i++];
            }
            i--;

            t.token = token;
            t.type = "constant";

            tokenPair.push_back(t);
        }

        else if(str[i] == '*' || str[i] == '/' || str[i] == '+' || str[i] == '-' || str[i] == '=')
        {
            string op(1, str[i]);
            tokenPair.push_back(TokenPair(op, "operator"));
        }
        else if(str[i] == ';' || str[i] == '{' || str[i] == '}' || str[i] == '(' || str[i] == ')' || str[i] == ',' || str[i] == '>' || str[i] == '<')
        {
            string op(1, str[i]);
            tokenPair.push_back(TokenPair(op, "punctuation"));
        }
    }

    for(auto t: tokenPair)
    {
        cout << t.token << ": " << t.type << endl;
    }
}


int main()
{
    ifstream sample("sample.txt");
    string tempLine;
    while(getline(sample, tempLine)){
        LexicalAnalyzer(tempLine);
    }
}