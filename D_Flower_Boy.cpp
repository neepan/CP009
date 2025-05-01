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



void neepan() {
    lli n, m;
    cin >> n >> m;

    vi a(n);
    fr(i, 0, n - 1) cin >> a[i];
    vi b(m);
    fr(i, 0, m - 1) cin >> b[i];

    auto can = [&](lli k) -> bool {
        vi new_a;
        new_a.reserve(n + 1);
        for (lli pos = 0; pos <= n; ++pos) {
            new_a.clear();
            new_a.insert(new_a.end(), a.begin(), a.begin() + pos);
            new_a.push_back(k);
            new_a.insert(new_a.end(), a.begin() + pos, a.end());

            lli j = 0;
            for (lli i = 0; i < new_a.size() && j < m; ++i) {
                if (new_a[i] >= b[j]) j++;
            }
            if (j == m) return true;
        }
        return false;
    };

    // Check if we can do it without any insertion
    lli j = 0;
    for (lli i = 0; i < n && j < m; ++i) {
        if (a[i] >= b[j]) j++;
    }
    if (j == m) {
        cout << 0 << "\n";
        return;
    }

    lli lo = 1, hi = 1e9, ans = -1;
    while (lo <= hi) {
        lli mid = (lo + hi) / 2;
        if (can(mid)) {
            ans = mid;
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }

    cout << ans << "\n";
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    _test
    neepan();
}