#include <bits/stdc++.h>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int x = 0;
    string s;

    for (int i = 0; i < n; i++)
    {
        cin >> s;

        if (s[0] == '+')
        {
            if (s[1] == '+')
            {
                x++;
            }
            else
            {
                ++x;
            }
        }
        else if (s[0] == '-')
        {
            if (s[1] == '-')
            {
                x--;
            }
            else
            {
                --x;
            }
        }
        else if (s[1] == '+')
        {
            x++;
        }
        else
        {
            x--;
        }
    }

    cout << x;
    return 0;
}