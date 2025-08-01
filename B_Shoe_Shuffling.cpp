// Neepan Biswas
// neepan ~ codeforces
#include<bits/stdc++.h>
using namespace std;
 
using lli = long long int;
using ld = long double;
using pi = pair<lli,lli>;
using vp = vector<pi>;
using vi = vector<lli>;
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
#define rev(v) v.rbegin(), v.rend()
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define cd(condition, value_if_true, value_if_false) ((condition) ? (value_if_true) : (value_if_false))
#define yes cout << "YES"<<endl
#define no cout << "NO"<<endl
 
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
 
void neepan(){
    lli n;cin>>n;
    vi a(n);
    fr(i,0,n-1)cin>>a[i];


    mp mpp;
    for(auto it: a){
        mpp[it]++;
    }
    bool can_shuffle=true;
    for(auto x: mpp){
        if(x.ss==1){
            can_shuffle=false;
            break;
        }
    }
    if(!can_shuffle){
        cout<< -1<<endl;
        return;
    }
    vi b(n);
    fr(i,0,n-1){
        b[i]=i+1;
    }

    lli l=0,r=0;
    while(r<n){
        if(a[l]==a[r]){
            r++;
        }
        else{
            rotate(b.begin()+l,b.begin()+l+1,b.begin()+r);
            l=r;
        }
    } \
    rotate(b.begin()+l,b.begin()+l+1,b.begin()+r);
    for(auto i: b){
        cout<<i<<" ";
    }
    cout<<endl;
    
}
 
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
 
_test
neepan();
}