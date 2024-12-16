#include <locale.h>
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string password;
    getline(cin, password);
    
    int count = 0;
    bool isvalid = true;

    if (!(password.size() >= 8 && password.size() < 14))
    {
        isvalid = false;
    }

    for (char i : password)
    {
        
        if (isupper(i) || isdigit(i))
        {
            count++;

        }


    }

    if (count < 3)
    {
        isvalid = false;
        
    }
    
    string output = (isvalid) ? "YES" : "NO";

    cout << output;

}

