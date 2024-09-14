#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, cnt, n;
    cin >> t;

    while (t--)
    {
        cin >> n;
        cnt=0;
        while (n >= 2)
        {
            if (n >= 4)
            {
                n = n - 4;
                cnt += 1;
            }
            else
            {
                n = n - 2;
                cnt += 1;
            }
        }
        cout << cnt << endl;
        
    }
    return 0;
}