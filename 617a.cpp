#include <iostream>

using namespace std;

int main()
{
    int x, result;

    cin >> x;

    if (!(1 <= x && x <= 1000000)) 
    {
        return 0;
    } 
    
    if (x % 5 == 0)
    {
        result = x/5;
    }
    else
    {
        result = x/5 + 1;
    }

    cout << result << endl;
    return 0;
}