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
    lli l, r;
    cin >> l >> r;

    lli ans,c=0,c1;

    ans=r-l+1;

    //2 3 5 7
    c1=(r/2)-(l-1)/2 + (r/3)-(l-1)/3+ (r/5)-(l-1)/5 +   (r/7)-(l-1)/7;

    //2 3
    c1=c1-((r/6)-(l-1)/6);
    // 2 5
    c1=c1-((r/10)-(l-1)/10);
    // 2 7
    c1=c1-((r/14)-(l-1)/14);
    // 3 5
    c1=c1-((r/15)-(l-1)/15);
    //3 7
    c1=c1-((r/21)-(l-1)/21);
    //5 7
    c1=c1-((r/35)-(l-1)/35);

    //2 3 5
    c1=c1+((r/30)-(l-1)/30);
    // 2 3 7
    c1=c1+((r/42)-(l-1)/42);
    // 2 5 7
    c1=c1+((r/70)-(l-1)/70);
    //3 5 7
    c1=c1+((r/105)-(l-1)/105);

    // 2 3 5 7
    c1=c1-((r/210)-(l-1)/210);

    ans=ans-c1;
    cout<<ans<<endl;
    


}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    _test
    neepan();
}