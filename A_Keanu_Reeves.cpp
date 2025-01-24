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

    lli n;
    cin >> n;

    str s;
    cin >> s;

    lli cnt1 = 0, cnt0 = 0;
    fr(i, n)
    {
        if (s[i] == '1')
            cnt1++;
        else
            cnt0++;
    }
    if (cnt1 != cnt0)
    {
        cout << 1 << endl;
        cout << s << endl;
    }
    else
    {
        cout << 2 << endl;
        cout << s[0] << " ";
        cout << s.substr(1) << endl;
    }

    return 0;
}