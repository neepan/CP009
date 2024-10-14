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

    lli n;
    cin >> n;
    vi arr(n);
    fr(i, n) cin >> arr[i];
    if (n <= 2)
    {
        cout << 0 << endl;
    }
    else
    {

        int min_strength = *min_element(all(arr));
        int max_strength = *max_element(all(arr));

        int count = 0;
        for (int i = 0; i < n; ++i)
        {
            if (arr[i] > min_strength && arr[i] < max_strength)
            {
                ++count;
            }
        }
        cout<<count;
    }

    return 0;
}