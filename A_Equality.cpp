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

    lli n, k;
    cin >> n >> k;

    vector<char> v(n);
    fr(i, n) cin >> v[i];

    lli cnt = 0;

    // taking the first k elements
    vi a(k);
    for (lli i = 0; i < k; i++)
        a[i] = 'A' + i;

    // checking if the first k elements are present in the string
    for (lli j = 0; j < k; j++)
    {
        bool found = false;
        for (lli i = 0; i < n; i++)
        {
            if (v[i] == a[j])
            {
                found = true;
                break;
            }
        }
        if (!found)
        {
            cnt = -1;
            break;
        }
    }
    // now checking for good subsequences
    if (cnt == -1)
    {
        cout << 0 << endl;
    }
    else
    {
        lli count = 0;
        for (char c = 'A'; c < 'A' + k; c++)
        {
            lli temp_count = 0;
            fr(i, n)
            {
                if (v[i] == c)
                {
                    temp_count++;
                }
            }
            count = (count == 0) ? temp_count : min(count, temp_count);
        }
        cout << count * k << endl;
    }
    return 0;
}