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

    vi a(n);
    fr(i, 0, n - 1) cin >> a[i];
    vi b(n);
    fr(i, 0, n - 1) cin >> b[i];

    lli cnt = 0;
    vp res;
   

    while (true) {
    bool done = true;

    
    fr(i, 0, n - 2) {
        if (a[i] > a[i + 1]) {
            swap(a[i], a[i + 1]);
            res.pb({1, i + 1});
            cnt++;
            done = false;
        }
        if (b[i] > b[i + 1]) {
            swap(b[i], b[i + 1]);
            res.pb({2, i + 1});
            cnt++;
            done = false;
        }
    }

    
    fr(i, 0, n - 1) {
        if (a[i] >= b[i]) {
            swap(a[i], b[i]);
            res.pb({3, i + 1});
            cnt++;
            done = false;
        }
    }

    if (cnt > 1709) break;
    if (done) break;
}

    cout << cnt << endl;
    for (auto it : res)
    {
        cout << it.ff << ' ' << it.ss << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    _test
    neepan();
}