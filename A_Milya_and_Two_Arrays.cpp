// Neepan Biswas
// neepan ~ codeforces
#include<bits/stdc++.h>
using namespace std;
 
using lli = long long int;
using ch = char;
using str=string;
using ld = long double;
using pi = pair<lli,lli>;
using vp = vector<pi>;
using vi = vector<lli>;
using vs = vector<str>;
using vc = vector<ch>;
using bl =bool;
using mp=map<lli,lli>;
using ump=unordered_map<lli,lli>;
 
#define fr(i,x,n) for (lli i=(x);i<=(n);i++)
#define fr1(j, n,x) for (lli j = (n); j >= (x); j--)
#define _test   int _TEST=1; cin>>_TEST; while(_TEST--)
#define pb push_back
#define eb emplace_back
#define sz(x) (lli)x.size()
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
 
void neepan(){
    lli n;
    cin>>n;
    vi a(n);
    fr(i,0,n-1)cin>>a[i];
    vi b(n);
    fr(i,0,n-1)cin>>b[i];

    set<lli> s,t;
    fr(i,0,n-1){
        s.insert(a[i]);
        t.insert(b[i]);
    }
    if(s.size()+t.size()>3){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}
 
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
 
_test
neepan();
}