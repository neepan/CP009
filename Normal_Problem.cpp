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
		str s;
		cin>>s;
		str result;
		for(lli i=sz(s);i>=0;i--){
			if(s[i]=='q')result+='p';
			if(s[i]=='p')result+='q';
			if(s[i]=='w')result+='w';
			}
		cout<<result<<endl;

	}
	return 0;
}