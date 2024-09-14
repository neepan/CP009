#include <bits/stdc++.h>
using namespace std;

#define fr(i, n) for (lli i = 0; i < n; i++)
#define pb push_back
#define sz(x) x.size()
#define ff first
#define ss second
#define all(v) v.begin(), v.end()
#define debug(x) cout << '>' << #x << ':' << x << endl;

using lli = long long int;
using ld = long double;
using ii = pair<lli, lli>;
using vii = vector<ii>;
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

    lli l, r, a;
    cin >> l >> r >> a;

    if ((l == 0 && a == 0) || (r == 0 && a == 0))

    {

        cout << "0" << endl;
    }

    else

    {

        lli left = min(l + a, (l + a + r) / 2);

        lli right = min(r + a, (l + a + r) / 2);

        cout << 2 * min(left, right) << endl;
    }

    return 0;
}