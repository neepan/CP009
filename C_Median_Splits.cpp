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
    lli n, k;
    cin >> n >> k;

    /* Find if we can partition the array into 3 parts such that atleast 2 of them have medians <= k */

    /* 1. interate from left to right , whenever we get 2 medians <=k stop there.
    2. interate from left to right and iterate from end to first and check for medians
    3. iterate from right to left and check for medians<=k */

    vi a(n);
    fr(i, 0, n - 1) cin >> a[i];

    auto find = [&](lli start, lli diff)
    {
        lli cnt = 0;
        for (lli i = start; i >= 0 && i < n; i += diff)
        {
            cnt += (a[i] <= k);
            cnt -= (a[i] > k);
            if (cnt >= 0)
                return i;
        }
        return diff == 1 ? n : -1;
    } ;
    auto first2 = [&]()
    {
        lli l = find(0, 1);
        if (l % 2 == 0 && l + 1 < n && a[l + 1] > k)
            l++;
        lli r = find(l + 1, 1);
        return r < n - 1;
    };
    auto last2 = [&]()
    {
        lli r = find(n - 1, -1);
        if ((n - r) % 2 && r - 1 >= 0 && a[r - 1] > k)
            r--;
        lli l = find(r - 1, -1);
        return l > 0;
    };
    auto outer2 = [&]()
    {
        lli l = find(0, 1);
        lli r = find(n - 1, -1);
        return r - l > 1;
    };

    cout << (first2() || last2() || outer2() ? "YES" : "NO") << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    _test
    neepan();
}