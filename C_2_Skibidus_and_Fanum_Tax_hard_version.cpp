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
const int inf = 9e17;
const int mod = 1e9 + 7;
const int NUM = 1000030;
const int N = 10000000;
#pragma GCC optimize("unroll-loops,O3,Ofast")
#pragma GCC target("avx2,avx,fma,bmi,bmi2,lzcnt,popcnt")

// Global matrix to prevent stack overflow
// const lli MAX_N = 1000; // Adjust based on constraints
// vector<vector<lli>> a(MAX_N, vector<lli>(MAX_N));

lli findsmall(const vi &vec, lli x)
{
    auto it = lower_bound(vec.begin(), vec.end(), x);
    return (it != vec.end()) ? *it : -1; // return -1 if no such element exists
}
void neepan()
{
    lli n, m;
    cin >> n >> m;

    vi a(n);
    fr(i, 0, n - 1) cin >> a[i];
    vi b(m);
    fr(i, 0, m - 1) cin >> b[i];
    sort(all(b));

    lli prev = -inf;
    fr(i, 0, n - 1)
    {
        lli val = findsmall(b, a[i] + prev);
        if (val != -1){
            if(a[i]<prev){
                a[i]=val - a[i];
            }
            else{
                a[i] = min(a[i], val - a[i]);
            }
        }
        if(a[i]<prev){
            cout<<"NO"<<endl;
            return;
        }
        prev=a[i];
    }
    cout<<"YES"<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    _test
    neepan();
}