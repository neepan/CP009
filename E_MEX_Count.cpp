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
#define rev(v) v.rbegin(), v.rend()
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define cd(condition, value_if_true, value_if_false) ((condition) ? (value_if_true) : (value_if_false))
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

const lli inf = 9e17;
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
    lli n;
    cin >> n;

    mp m;
    lli mex = 0;
    fr (i, 0, n - 1)
    {
        lli x;
        cin >> x;
        m[x]++;
    }

    mp freq;
    for (auto &[x, y] : m)
    {
        if (x == mex)
        {
            mex++;
            freq[y]++;
        }
    }

    vi a(n + 1, 0);
    a[n] = 1;
    for (lli i = n - 1; i > n - mex; i--)
    {
        a[i] = a[i + 1] + 1;
    }

    a[0] = 1;
    for (lli i = 1; i < n; i++)
    {
        if (a[i])
            break;
        a[i] = a[i - 1] + freq[i];
    }
    for (auto &x : a)
        cout << x << " ";
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    _test
    neepan();
}