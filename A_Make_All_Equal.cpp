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
        lli m;
        cin >> m;
        mp f;
        for(lli it=0;it<m;it++){
        lli x;
        cin>>x;
        f[x]++;
    }

            lli ans = m;
        for (const auto &x : f)
        {
            ans = min(ans, m - x.second);
        }
    cout<<ans<<endl;
    }


return 0;
}