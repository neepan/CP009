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

    string s1, s2;
    cin >> s1 >> s2;
    int n;
    cin>>n;
    cout<<s1<<" "<<s2<<endl;
    while (n--)
    {
        string v1,v2;
        cin>>v1>>v2;
        if(v1==s1)
        {
            s1 = v2;
            cout<<v2<<" "<<s2<<endl;
        } 
        else if(v1==s2)
        {
             s2 = v2;
            cout<<s1<<" "<<v2<<endl;
        }
      
    }
    

    return 0;
}