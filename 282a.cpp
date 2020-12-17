#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, x(0);
    
    cin >> n;

    if (!(1 <= n && n <= 150)) 
    {
        return 0;
    } 
    else 
    {
        ;
    }

    string s;
    while (n--)
    {
        cin >> s;

        if (s.size() != 3 || (s.find('x') == std::string::npos && s.find('X') == std::string::npos))
        {
            return 0;
        }
        else 
        {
            ;
        }

        if (s.find("++") != std::string::npos)
        {
            ++x;
        }
        else if (s.find("--") != std::string::npos)
        {
            --x;
        }
        else
        {
            return 0;
        }
    }

    cout << x << endl;
    return 0;
}
