// Neepan Biswas
// neepanb ~ codeforces
#include <bits/stdc++.h>
using namespace std;

#define fr(i, n) for (lli i = 0; i < n; i++)
#define fr1(i, n) for (lli i = 1; i < n; i++)
#define fr3(i, n) for (lli i = 0; i <= n; i++)
#define pb push_back
#define eb emplace_back
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
using ch = char;

#pragma GCC optimize("unroll-loops,O3,Ofast")
#pragma GCC target("avx2,avx,fma,bmi,bmi2,lzcnt,popcnt")

int charToBit(char ch) {
    if (ch == 'A') return 1;
    if (ch == 'B') return 2;
    if (ch == 'C') return 4;
    return 0; // For '?', return 0
}
char bitToChar(int bit) {
    if (bit == 1) return 'A';
    if (bit == 2) return 'B';
    if (bit == 4) return 'C';
    return '?'; // Should never happen
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    lli t;
    cin >> t;

    while (t--)
    {
        vector<str> a(3);
        fr(i,3){
            cin>>a[i];
        }
        fr(i,3){
            fr(j,3){
                if(a[i][j]== '?'){
                    lli row_mask= charToBit(a[i][(j+1)%3])^ charToBit(a[i][(j+2)%3]);
                    lli missing= 7^row_mask;
                    cout<<bitToChar(missing)<<endl;
                }
            }
        }
    }
    return 0;
}