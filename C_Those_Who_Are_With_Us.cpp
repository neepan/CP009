// Neepan Biswas
// neepan ~ codeforces
#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using ld = long double;
using pi = pair<lli, lli>;
using vp = vector<pi>;
using vi = vector<lli>;
using mp = map<lli, lli>;
using ump = unordered_map<lli, lli>;

#define fr(i, x, n) for (lli i = (x); i <= (n); i++)
#define fr1(j, n, x) for (lli j = (n); j >= (x); j--)
#define _test      \
    int _TEST = 1; \
    cin >> _TEST;  \
    while (_TEST--)
#define pb push_back
#define eb emplace_back
#define sz(x) (lli) x.size()
#define ff first
#define ss second
#define all(v) v.begin(), v.end()
#define rev(v) v.rbegin(), v.rend()
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define cd(condition, value_if_true, value_if_false) ((condition) ? (value_if_true) : (value_if_false))
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

const lli inf = 9e17;
const int mod = 1e9 + 7;
const int NUM = 1000030;
const int N = 10000000;
const int MAX_N = 1e6 + 5;

#pragma GCC optimize("unroll-loops,O3,Ofast")
#pragma GCC target("avx2,avx,fma,bmi,bmi2,lzcnt,popcnt")

// Global matrix to prevent stack overflow
// const lli MAX_N = 1000; // Adjust based on constraints
// vector<vector<lli>> a(MAX_N, vector<lli>(MAX_N));

bool check(vector<pair<int, int>> v, int r, int c)
{
    for (auto x : v)
    {
        if (x.first != r && x.second != c)
            return false;
    }
    return true;
}

void neepan()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int ma = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            ma = max(ma, a[i][j]);
        }
    }

    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == ma)
            {
                v.push_back(make_pair(i, j));
            }
        }
    }

    if (v.size() == 1)
    {
        cout << ma - 1 << '\n';
        return;
    }

    if (v[0].first == v[1].first)
    {
        int r = v[0].first, c = -1;
        bool flag = true;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i].first != r)
            {
                if (c == -1)
                {
                    c = v[i].second;
                    continue;
                }
                else if (c != v[i].second)
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
        {
            cout << ma - 1 << '\n';
            return;
        }
    }

    if (v[0].second == v[1].second)
    {
        int c = v[0].second, r = -1;
        bool flag = true;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i].second != c)
            {
                if (r == -1)
                {
                    r = v[i].first;
                    continue;
                }
                else if (r != v[i].first)
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
        {
            cout << ma - 1 << '\n';
            return;
        }
    }

    if (check(v, v[0].first, v[1].second) || check(v, v[1].first, v[0].second))
    {
        cout << ma - 1 << '\n';
        return;
    }

    cout << ma << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    _test
    neepan();
}