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

    int arr[n];
    fr(i, n)
    {
        cin >> arr[i];
    }

    lli nd = ceil((double)n / 2);

    lli ans = 0;
    for (lli j = -n; j <= n; j++)
    {
        if(j==0){
            continue;
        }

        lli cnt = 0;
        fr(i, n)
        {
            if (arr[i] / (double)j > 0)
            {
                cnt++;
            }
        }
        if (cnt >= nd )
        {
            ans = j;
            break;
        }
       
    }
    cout << ans << endl;

    return 0;
}
