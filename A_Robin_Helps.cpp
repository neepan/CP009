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

    lli t;
    cin >> t;

    while (t--)
    {
        lli n, k;
        cin >> n >> k;
        vi a(n);
        fr(i, n) cin >> a[i];

        lli sum = 0;
        lli cnt = 0;

        fr(i, n)
        {
            if (a[i] == 0)
            {

                if (sum > 0)
                {
                    cnt++;
                    sum--;
                }
            }
            else if (a[i] >= k)
            {

                sum += a[i];
            }
        }

        cout << cnt << endl;
    }

    return 0;
}