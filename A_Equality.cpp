// Neepan Biswas
// neepanb ~ codeforces
#include <bits/stdc++.h>
using namespace std;

#define fr(i, n) for (lli i = 0; i < n; i++)
#define pb push_back
#define sz(x) x.size()
#define ff first
#define ss second
#define all(v) v.begin(), v.end()
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define cd(condition, value_if_true, value_if_false) ((condition) ? (value_if_true) : (value_if_false))

using lli = long long int;
using ld = long double;
using pi = pair<lli, lli>;
using vp = vector<pi>;
using vi = vector<lli>;
using bl = bool;
using mp = map<lli, lli>;
using ump = unordered_map<lli, lli>;
using str = string;

#pragma GCC optimize("unroll-loops,O3,Ofast")
#pragma GCC target("avx2,avx,fma,bmi,bmi2,lzcnt,popcnt")

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vi hash(k,0);
    lli size = 0;
    lli x = INT_MAX;
    for(lli i=0;i<n;i++)
    {
         hash[s[i]-'A']++;
    }
    for(int i =0 ; i<k;i++)
    {
        x = min(x,hash[i]);
 
    }
 
     for(lli i=0;i<k;i++)
    {
         if(hash[i] == 0)
         {
            size = 0;
            break;
         }
         else
         {
            size = size+x;
         }
    }
         cout<<size<<endl;
 
 

    return 0;
}