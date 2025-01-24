//Neepan Biswas
//neepanb ~ codeforces
#include<bits/stdc++.h>
using namespace std;
 
#define fr(i,n) for (lli i=0;i<n;i++)
#define pb push_back
#define sz(x) x.size()
#define ff first
#define ss second
#define all(v) v.begin(), v.end()
#define debug(x) cout << '>' << #x << ':' << x << endl;
 
using lli = long long int;
using ld = long double;
using ii = pair<lli,lli>;
using vii = vector<ii>;
using vi = vector<lli>;
using bl =bool;
using mp=map<lli,lli>;
using ump=unordered_map<lli,lli>;
using str=string;
 
#pragma GCC optimize("unroll-loops,O3,Ofast")
#pragma GCC target("avx2,avx,fma,bmi,bmi2,lzcnt,popcnt")
 
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
 
lli w,h;
cin>>w>>h;
lli u1,d1;
cin>>u1>>d1;
lli u2,d2;
cin>>u2>>d2;
 

while(h!=0){
	w += h;
	if(h == d1) w = w - u1;
	if(h == d2) w = w - u2;
	h--;
	if(w<0) w = 0;
	
}
cout << w << endl;
return 0;
}