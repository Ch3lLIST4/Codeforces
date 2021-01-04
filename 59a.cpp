#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string s;
    int upper(0), lower(0);

    cin >> s;

    if (!(1 <= s.length() && s.length() <= 100)) 
    {
        return 0;
    }
    
    for (int i = 0; i < s.length(); i++)
    {
        if (isupper(s[i]))
        {
            upper++;
        }
        else
        {
            lower++;
        }
    }

    if (upper > lower)
    {
        for (int i; i < s.length(); i++)
        {
            s[i] = toupper(s[i]);
        }
    }
    else
    {
        for (int i; i < s.length(); i++)
        {
            s[i] = tolower(s[i]);
        }
    }

    cout << s << endl;
    return 0;
}