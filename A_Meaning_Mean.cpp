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
        // lli n;
        // cin >> n;
        // vi a(n);
        // fr(i, n) cin >> a[i];

        // lli flr = 0;
        // while (n > 1)
        // {
        //     sort(all(a));
        //     flr = (a[0] + a[1]) / 2;
        //     a.erase(a.begin() + 0);
        //     a.erase(a.begin() + 0);
        //     a.pb(flr);
        //     n--;
        // }
        // cout << a[0] << endl;
         lli n;
    cin>>n;
    
    vector<lli>v(n);
    for(auto &it:v)cin>>it;
    sort(all(v));
    lli ans=(v[0]+v[1])/2;
    for(int i=2;i<n;i++){
        ans= (ans+v[i])/2;
    }
    cout<<ans<<endl;
    }
    return 0;
}