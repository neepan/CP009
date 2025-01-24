// Neepan Biswas
// neepanb ~ codeforces
#include <bits/stdc++.h>
using namespace std;

#define fr(i, n) for (lli i = 0; i < n; i++)
#define pb push_back
#define sz(x) (lli) x.size()
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

    lli n, k;
    cin >> n >> k;
    vi a(n);
    fr(i, n) cin >> a[i];
    lli max = 0;
    fr(b, n)
    {
        lli e = 0, s = 0;
        fr(i, n)
        {
            if ((i - b) % k != 0)
            {
                if (a[i] == 1)
                    ++e;
                else
                    ++s;
            }
        }
        lli diff = abs(e - s);
        if (diff > max)
            max = diff;
    }
    cout<<max<<endl;

    return 0;
}
