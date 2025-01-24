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
    lli n;
    cin >> n;
    vi a(2 * n);
    fr(i, 2 * n) cin >> a[i];

    int sum1 = accumulate(a.begin(), a.begin() + n, 0);
    int sum2 = accumulate(a.begin() + n, a.end(), 0);

    if (sum1 != sum2)
    {
        for (int i = 0; i < 2 * n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    else
    {
        sort(a.begin(), a.end());
        sum1 = accumulate(a.begin(), a.begin() + n, 0);
        sum2 = accumulate(a.begin() + n, a.end(), 0);
        if (sum1 == sum2)
        {
            cout << "-1" << endl;
        }
        else
        {
            for (int i = 0; i < 2 * n; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
        return 0;
    }
