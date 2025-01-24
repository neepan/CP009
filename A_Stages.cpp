// Neepan Biswas
// neepanb ~ codeforces
#include <bits/stdc++.h>
using namespace std;

#define fr(i, n) for (lli i = 0; i < n; i++)
#define fr1(i, n) for (lli i = 1; i < n; i++)
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

#pragma GCC optimize("unroll-loops,O3,Ofast")
#pragma GCC target("avx2,avx,fma,bmi,bmi2,lzcnt,popcnt")

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    lli n, k;
    cin >> n >> k;

    str s;
    cin >> s;

    sort(s.begin(), s.end());

    // Vector to store the selected stages
    vector<char> result;

    // Start by adding the first valid letter
    result.push_back(s[0]);
    int totalWeight = s[0] - 'a' + 1; // Weight of the first letter

    // Try to greedily add letters to the rocket
    for (int i = 1; i < n && result.size() < k; ++i)
    {
        // Ensure that the next letter is at least 2 positions away in the alphabet
        if (s[i] >= result.back() + 2)
        {
            result.push_back(s[i]);
            totalWeight += s[i] - 'a' + 1; // Add the weight of the current letter
        }
    }

    // Check if we were able to collect exactly k letters
    if (result.size() == k)
    {
        cout << totalWeight << endl; // Print the total weight of the rocket
    }
    else
    {
        cout << -1 << endl; // Print -1 if it's impossible to collect k letters
    }

    return 0;
}