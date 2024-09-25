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
using ii = pair<lli, lli>;
using vii = vector<ii>;
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

    lli n;
    cin >> n;

    string h;
    cin>>h;

    vector<string> v1(n);
    fr(i,n){
        cin>>v1[i];
    }
    lli cnt1=0,cnt2=0;
    for(auto x: v1){
        string departure = x.substr(0,3);
        string arrival = x.substr(5,3);

        if(departure == h){
            cnt1++;
        }
        else if(arrival == h){
            cnt2++;
        }
    }


    if (cnt1 > cnt2)
    {
        cout << "contest" << endl;
    }
    else
    {
        cout << "home" << endl;
    }

    return 0;
}
