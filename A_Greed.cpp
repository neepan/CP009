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
    cin >> n; // Read the value of n first

    vi a(n);
    vi b(n);

    fr(i, n)
    {
        cin >> a[i];
    }
    fr(i, n)
    {
        cin >> b[i];
    }

    lli sum = 0; // Initialize `sum` to 0 before using it
    fr(i, n)
    {
        sum += a[i];
    }

    sort(all(b), greater<int>());

    if ((b[0] + b[1]) >= sum)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl; // Consistent capitalization with "YES"
    }

    return 0;
}
