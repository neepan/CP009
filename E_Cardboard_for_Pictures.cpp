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
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define cd(condition, value_if_true, value_if_false) ((condition) ? (value_if_true) : (value_if_false))
#define yes cout << "YES"<<endl
#define no cout << "NO"<<endl
 
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
 
void neepan(){

    lli n,c;
    cin>>n>>c;
    
    vi a(n);
    fr(i,0,n-1)cin>>a[i];

    lli low=1, high=1e9;
    while(low<=high){
        lli area_sum=0;
        lli mid=low+(high-low)/2;
        fr(i,0,n-1){
            lli len=(2*mid) + a[i];
            area_sum+=len*len;
            if(area_sum>c)break;
        }
        if(area_sum==c){
            cout<<mid<<endl;
            return;
        }
        if(area_sum < c){
            low=mid+1;
        }
        else high=mid-1;
    }
}
 
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
 
_test
neepan();
}