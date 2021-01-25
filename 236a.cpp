#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s;

    cin >> s;

    if (!(1 <= s.length() && s.length() <= 100)) 
    {
        return 0;
    }
    for (int i=0; i < s.length(); i++)
    {
        if (!islower(s[i])) 
        {
            return 0;
        }
    }

    sort(s.begin(), s.end());
    s.erase(unique(s.begin(), s.end()), s.end());

    if (s.length() % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}