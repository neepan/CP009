// Neepan Biswas
// neepan ~ codeforces
#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using ch = char;
using str = string;
using ld = long double;
using pi = pair<lli, lli>;
using vp = vector<pi>;
using vi = vector<lli>;
using vs = vector<str>;
using vc = vector<ch>;
using bl = bool;
using mp = map<lli, lli>;
using ump = unordered_map<lli, lli>;

#define fr(i, x, n) for (lli i = (x); i <= n; i++)
#define fr1(i, x, n) for (lli i = n; i >= (x); i--)
#define pb push_back
#define eb emplace_back
#define sz(x) (lli) x.size()
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


void neepan()
{
    lli n,m;
    cin>>n>>m;
    vector<vi> a(n,vi(m));
    for(auto &v:a){
        for(auto &x:v)
            cin>>x;
    }
 
    vi perm(n,-1);
    bool isValid=true;
    for(lli i=0;i<n;i++){
        if(!isValid)
            break;
        sort(all(a[i]));
        for(lli j=1;j<m;j++){
            if(a[i][j-1]+n!=a[i][j])
                isValid=false;
        }
 
        if(!isValid)
            break;
        perm[a[i][0]]=i;
    }
 
 
    if(!isValid){
        cout<<-1<<endl;
        return;
    }
 
    for(const auto &x:perm)
        cout<<x+1<<" ";
    cout<<endl;
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    lli t = 1;
    cin >> t;

    while (t--)
    {
        neepan();
    }
    return 0;
}