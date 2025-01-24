#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using mytype = long double;
using ii = pair<lli, lli>;
using vii = vector<ii>;
using vi = vector<lli>;
using bl = bool;
using mp = map<lli, lli>;
using ump = unordered_map<lli, lli>;

int main()
{
    lli t;
    cin >> t;
    lli d;
    int cnt = 0;
    for (int i = 1; i < t; i++)
    {
        if (t % i == 0)
        {
            d = t / i;
            if (d % 2 != 0 && d <= t)
                cnt++;
            else if (t - d < t)
                cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}