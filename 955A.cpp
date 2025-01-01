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

#define fr(i,n) for (lli i=0;i<n;i++)
#define fr1(i,n) for (lli i=1;i<n;i++)
#define fr3(i, n) for (lli i = 0; i <=n; i++)
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

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	lli t;
	cin>>t;

	while(t--){
		lli n;
		cin>>n;

		vi a(n);
		fr(i,n)cin>>a[i];

		vi b(n);
		fr(i,n)cin>>b[i];

		if(n==1){
			cout<<a[0]<<endl;
		}
		else{
			lli sa=0,sb=0;
			fr(i,n-1){
				if(a[i]>b[i+1]){
					sa+=a[i];
					sb+=b[i+1];
				}
			}
			sa+=a[n-1];
			cout<<sa-sb<<endl;
		}

	}
	return 0;
}