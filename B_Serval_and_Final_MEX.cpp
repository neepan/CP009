// Neepan Biswas
// neepan ~ codeforces
#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using ll= long long;
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
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(auto &it:v)cin>>it;
    int c=0;
    for(auto it:v){
        if(it==0){
            c++;
        }
    }
    if(!c){
        cout<<1<<endl;
        cout<<1<<" "<<n<<endl;
        return;
    }
 
    if(c==n){
        cout<<3<<endl;
        cout<<n-1<<" "<<n<<endl;
        cout<<1<<" "<<n-2<<endl;
        cout<<1<<" "<<2<<endl;
        return;
    }
    vector<int>ans;
    vector<pair<int,int>>op;
    for(int i=0;i<n;i++){
        if(v[i]==0){
            if(i==n-1){
                op.push_back({sz(ans),sz(ans)+1});
            }
            else{
                op.push_back({sz(ans)+1,sz(ans)+2});
                ans.push_back(5);
                i++;
            }
        }
        else{
            ans.push_back(5);
        }
    }
    op.push_back({1,sz(ans)});
    cout<<sz(op)<<endl;
    for(auto it:op){
        cout<<it.ff<<" "<<it.ss<<endl;
    }


}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    _test
    neepan();
}