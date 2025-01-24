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

    while (t--)
    {
        lli n;
        cin >> n;
        string s;
        cin>>s;

        char ch1 = s[0];
        char ch2 = s[n - 1];
        if (ch1 != ch2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}