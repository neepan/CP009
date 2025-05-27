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
    lli n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    lli c0 = 0, c1 = 1;
    for (auto x : s)
    {
        if (x == '0')
            c0++;
    }
    c1 = n - c0;
     lli total_pairs=n/2;
    lli bad_pairs=total_pairs-k;
    if(c0< bad_pairs || c1<bad_pairs){
        no;
        return;
    }
    lli rem0g=c0-bad_pairs;
    lli rem1g=c1-bad_pairs;

    lli possible0g= rem0g/2;
    lli possible1g= rem1g/2;

    lli totg=possible0g+possible1g;

    if(totg>=k){
        yes;
    }
    else{
        no;
    }
}

    int main()
    {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        _test
        neepan();
    }