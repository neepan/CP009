// Neepan Biswas
// neepan ~ codeforces
#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using ll= long long;
using ld = long double;
using pi = pair<lli, lli>;
using vp = vector<pi>;
using vi = vector<lli>;
using mp = map<lli, lli>;
using ump = unordered_map<lli, lli>;

#define fr(i, x, n) for (ll i = (x); i <= (n); i++)
#define fr1(j, n, x) for (ll j = (n); j >= (x); j--)

#define f(i, n) for (ll i = 0; i < n; i++)
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
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define cd(condition, value_if_true, value_if_false) ((condition) ? (value_if_true) : (value_if_false))
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define nline '\n'




#pragma GCC optimize("unroll-loops,O3,Ofast")
#pragma GCC target("avx2,avx,fma,bmi,bmi2,lzcnt,popcnt")

// Global matrix to prevent stack overflow
// const lli MAX_N = 1000; // Adjust based on constraints
// vector<vector<lli>> a(MAX_N, vector<lli>(MAX_N));

void neepan()
{
    lli n;
    cin >> n;
    vi a(n);
    fr(i, 0, n - 1) cin >> a[i];
    vi b(n);
    fr(i, 0, n - 1) cin >> b[i];

    ll g[n], h[n];
	f(i, n)
	{
		a[i]--;
		b[i]--;
		g[a[i]] = b[i];
		h[b[i]] = a[i];
	}
 
	f(i, n)
	{
		if (g[g[i]] != i)
		{
			cout << -1 << nline;
			return;
		}
	}
 
	vector<ll> fin(n, -1);
	ll cnt = 0;
 
	ll ai[n];
	f(i, n)
	{
		ai[a[i]] = i;
	}
	ll co = 0;
	f(i, n)
	{
		if (a[i] == b[i])
			co++;
	}
 
	if (co != n % 2)
	{
		cout << -1 << nline;
		return;
	}
 
	if (n & 1)
	{
		f(i, n)
		{
			if (a[i] == b[i])
			{
				fin[i] = n / 2;
			}
		}
	}
 
	f(i, n)
	{
		if (fin[i] == -1)
		{
			fin[i] = cnt++;
			fin[ai[g[a[i]]]] = n - cnt;
			if ((n & 1) && cnt == n / 2)
				cnt++;
		}
	}
 
	ll fi[n];
	f(i, n)
	{
		fi[fin[i]] = i;
	}
 
	// f(i, n)
	// {
	// 	cout << fin[i] << ' ';
	// }
	// cout << nline;
 
	vector<pair<ll, ll>> ans;
	f(i, n)
	{
		ll idx = fi[i];
		swap(fin[i], fin[idx]);
		fi[fin[i]] = i;
		fi[fin[idx]] = idx;
		// f(i, n)
		// {
		// 	cout << fin[i] << ' ';
		// }
		// cout << nline;
		if (i != idx)
			ans.push_back(make_pair(i, idx));
	}
 
	cout << ans.size() << nline;
	for (auto x : ans)
	{
		cout << x.first + 1 << ' ' << x.second + 1 << nline;
	}
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    _test
    neepan();
}