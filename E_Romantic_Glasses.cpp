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
    vi prefix_even(n,0),prefix_odd(n,0);
    prefix_even[0]=a[0];

    mp m;
    m[prefix_even[0]-prefix_odd[0]]++;
    int flag=0;
    fr(i,1,n-1){
        prefix_odd[i]+=prefix_odd[i-1];
        prefix_even[i] += prefix_even[i-1];
        

        if(i%2)prefix_odd[i]+=a[i];
        else prefix_even[i]+=a[i];

        m[prefix_even[i]- prefix_odd[i]]++;
        if(m[prefix_even[i]-prefix_odd[i]]==2 || prefix_even[i]-prefix_odd[i]==0){
            flag=1;break;
        }
    }
    if(flag)yes;
    else no;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    _test
    neepan();
}