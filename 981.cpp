// Neepan Biswas
// neepanb ~ codeforces
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

#define fr(i,x,n) for (lli i=(x);i<=n;i++)
#define fr1(i,x,n) for (lli i = n; i>=(x); i--)
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

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	lli t;
	cin>>t;

	while(t--){
		lli n; 
		cin>>n;
		// vector<vector<lli>> a(n,vector<lli>(n));
		fr(i,0,n-1){
			fr(j,0,n-1){
				cin>>a[i][j];
			}
		}

		lli ans=0;
		fr(i,0,n-1){
			lli mn=LLONG_MAX;
			fr(j,0,n-i){
				mn=min(mn,a[i+j][j]);
			}
			if(mn<0)ans+=-mn;
		}
		fr(j,1,n-1){
			lli mn=LLONG_MAX;
			fr(i,0,n-j){
				mn=min(mn,a[i][j+i]);
			}
			if(mn<0)ans+=-mn;;
		}
		cout<<ans<<endl;
	}
	return 0;
}