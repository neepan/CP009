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
    cin >> n >> m;
    vector<vector<char>> arr(n, vector<char>(m));
    fr(i, n)
    {
        fr(j, m)
        {
            cin >> arr[i][j];
        }
    }
    vector<pair<lli, lli>> s;

    fr(i, n)
    {
        fr(j, m)
        {
            if (arr[i][j] == 'B')
            {
                s.pb({i + 1, j + 1});
            }
        }
    }

    if (s.size() % 2 != 0)
    {
        cout << s[s.size() / 2].first << " " << s[s.size() / 2].second << endl;
    }
    return 0;
}