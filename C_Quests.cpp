// Neepan Biswas
// neepan ~ codeforces
#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using ld = long double;
using pi = pair<lli, lli>;
using vp = vector<pi>;
using vi = vector<lli>;
using mp = map<lli, lli>;
using ump = unordered_map<lli, lli>;

#define fr(i, x, n) for (lli i = (x); i <= (n); i++)
#define fr1(j, n, x) for (lli j = (n); j >= (x); j--)
#define _test      \
    int _TEST = 1; \
    cin >> _TEST;  \
    while (_TEST--)
#define pb push_back
#define eb emplace_back
#define sz(x) (lli) x.size()
#define ff first
#define ss second
#define all(v) v.begin(), v.end()
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define cd(condition, value_if_true, value_if_false) ((condition) ? (value_if_true) : (value_if_false))
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

const int inf = 9e17;
const int mod = 1e9 + 7;
const int NUM = 1000030;
const int N = 10000000;
const int MAX_N = 1e6 + 5;

#pragma GCC optimize("unroll-loops,O3,Ofast")
#pragma GCC target("avx2,avx,fma,bmi,bmi2,lzcnt,popcnt")

// Global matrix to prevent stack overflow
// const lli MAX_N = 1000; // Adjust based on constraints
// vector<vector<lli>> a(MAX_N, vector<lli>(MAX_N));

void neepan()
{
    lli n,k;
    cin >> n>>k;
    vi a(n);
    fr(i, 0, n - 1) cin >> a[i];

    vi b(n);
    fr(i, 0, n - 1) cin >> b[i];

    lli maxi = -1e9; // to keep track of max exp (B1...Bi)
    lli res = -1e9;
    lli ftime_gains = 0; // to keep track of sum(ai), unique first time gains
    fr (i, 1, n)
    {
        ftime_gains += a[i - 1];

        // remaining quests
        lli rem = k - i;
        if (rem < 0)
            break;
        maxi = max(maxi, b[i - 1]);
        lli exp_gain = ftime_gains + rem * maxi;
        res = max(res, exp_gain);
    }
    cout << res << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    _test
    neepan();
}