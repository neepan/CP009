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

    lli n, m;
    cin >> n;
    vi a(n);
    for (lli i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    vi b(m);
    for (lli i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    lli A, B;
    for (lli i = 0; i < n; i++)
    {
        for (lli j = 0; j < m; j++)
        {
            lli sum=a[i]+b[j];
            auto it=find(a.begin(),a.end(),sum);
            auto it2=find(b.begin(),b.end(),sum);
            if (it==a.end() && it2==b.end()) // 
            {
                A=a[i];
                B=b[j];
                break;
            }
        }
    }
    cout << A << " " << B << endl;

    return 0;
}