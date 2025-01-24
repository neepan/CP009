// Neepan Biswas
// neepanb ~ codeforces
#include <bits/stdc++.h>
using namespace std;

#define fr(i, n) for (lli i = 0; i < n; i++)
#define pb push_back
#define sz(x) (lli) x.size()
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

    lli r, c;
    cin >> r >> c;

    vector<vector<char>> s(r, vector<char>(c));
    fr(i, r)
    {
        fr(j, c)
        {
            cin >> s[i][j];
        }
    }
    bl ps=true;
    fr(i, r)
    {
        fr(j, c)
        {
            if(s[i][j]=='S' && j+1<c && s[i][j+1]=='W'){
                ps=false;
                break;
            }
            else if(s[i][j]=='W' && j+1<c && s[i][j+1]=='S'){
                ps=false;
                break;
            }
            else if(s[i][j]=='W' && i+1<r && s[i+1][j]=='S'){
                ps=false;
                break;
            }
            else if(s[i][j]=='S' && i+1<r && s[i+1][j]=='W'){
                ps=false;
                break;
            }

            else if(s[i][j]=='.'){
                s[i][j]='D';
            }
        }
    }
    if (!ps)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        fr(i, r)
        {
            fr(j, c)
            {
                cout << s[i][j];
            }
            cout << endl;
        }
    }
    
    return 0;
}
