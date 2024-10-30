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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    lli n, a, b;
    cin >> n >> a >> b;
    vi s(n);
    fr(i, n) cin >> s[i];

    lli l = 0, r = n - 1;
    lli cost = 0;
    while (l < r)
    {
        if (s[l] != 2 && s[r] != 2)
        {
            if (s[l] != s[r])
            {
                cout << -1 << endl;
                return 0;  // Exit immediately if palindrome is impossible
            }
        }
        else if (s[l] == 2 && s[r] == 2)
        {
            cost += 2 * min(a, b);
        }
        else
        {
            if (s[l] == 2)
            {
                cost += (s[r] == 0) ? a : b;
            }
            else
            {
                cost += (s[l] == 0) ? a:b;
            }
        }
        l++, r--;
    }
    if(n%2==1 && s[n/2]==2){
            cost+=min(a,b);
    }

    cout << cost << endl;  // Output the minimum cost if palindrome is possible

    return 0;
}
