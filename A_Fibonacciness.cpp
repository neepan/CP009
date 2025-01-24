// Neepan Biswas
// neepan ~ codeforces
#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using ch = char;
using str = string;
using ld = long double;
using pi = pair<lli, lli>;
using vp = vector<pi>;
using vi = vector<lli>;
using vs = vector<str>;
using vc = vector<ch>;
using bl = bool;
using mp = map<lli, lli>;
using ump = unordered_map<lli, lli>;

#define fr(i, x, n) for (lli i = (x); i <= n; i++)
#define fr1(i, x, n) for (lli i = n; i >= (x); i--)
#define pb push_back
#define eb emplace_back
#define sz(x) (lli) x.size()
#define ff first
#define ss second
#define all(v) v.begin(), v.end()
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define cd(condition, value_if_true, value_if_false) ((condition) ? (value_if_true) : (value_if_false))

#pragma GCC optimize("unroll-loops,O3,Ofast")
#pragma GCC target("avx2,avx,fma,bmi,bmi2,lzcnt,popcnt")

// Global matrix to prevent stack overflow
// const lli MAX_N = 1000; // Adjust based on constraints
// vector<vector<lli>> a(MAX_N, vector<lli>(MAX_N));

void neepan()
{
    lli a1, a2, a4, a5;
    cin >> a1 >> a2 >> a4 >> a5;

    vi a(5);
    a[0] = a1;
    a[1] = a2;
    a[3] = a4;
    a[4] = a5;
              
    lli cnt = 0, maxi = 0;               
    a[2] = a[0] + a[1];
    fr(i, 1, 4)                             
    {
        if (a[i + 1] - a[i - 1] == a[i])
        {
            cnt++;      
        }
    }
    maxi = max(maxi, cnt);
    cnt = 0;
    a[2] = a[3] - a[1];
    fr(i, 1, 4)
    {
        if (a[i + 1] - a[i - 1] == a[i])
        {
            cnt++;
        }
    }
    maxi = max(maxi, cnt);
    cnt = 0;
    a[2] = a[4] - a[3];
    fr(i, 1, 4)
    {
        if (a[i + 1] - a[i - 1] == a[i])
        {
            cnt++;
        }
    }
    maxi = max(maxi, cnt);

    cout << maxi << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    lli t = 1;
    cin >> t;

    while (t--)
    {
        neepan();
    }
    return 0;
}