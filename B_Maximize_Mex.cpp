// Neepan Biswas
// neepanb ~ codeforces
#include <bits/stdc++.h>
using namespace std;

#define fr(i, n) for (lli i = 0; i < n; i++)
#define pb push_back
#define sz(x) x.size()
#define ff first
#define ss second
#define all(v) v.begin(), v.end()
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define cd(condition, value_if_true, value_if_false) ((condition) ? (value_if_true) : (value_if_false))

using lli = long long int;
using ld = long double;
using pi = pair<lli, lli>;
using vp = vector<pi>;
using vi = vector<lli>;
using bl = bool;
using mp = map<lli, lli>;
using ump = unordered_map<lli, lli>;
using str = string;

#pragma GCC optimize("unroll-loops,O3,Ofast")
#pragma GCC target("avx2,avx,fma,bmi,bmi2,lzcnt,popcnt")

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    lli t;
    cin >> t;

    while (t--)
    {
        lli n;
        cin >> n;
        lli x;
        cin >> x;
        vector<lli> v(n);
        for (auto &it : v)
            cin >> it;
        sort(all(v));
        map<lli, lli> mpp, mp1;
        for (auto it : v)
        {
            mp1[it]++;
        }
        int cnt = 0;

        while (true)
        {
            if (mp1[cnt] > 0)
            {

                mp1[cnt]--;
                lli f = mp1[cnt];
                for (int i = 0; i < f; i++)
                {
                    mpp[cnt % x]++;
                }
                cnt++;
            }
            else if (mpp[cnt % x] > 0)
            {
                // cout<<"hello"<<endl;
                mpp[cnt % x]--;
                cnt++;
            }
            else
            {
                break;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}