#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
// #pragma GCC optimize("Ofast")
// #pragma GCC optimize("unroll-loops")

using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define f(i, n) for (ll i = 0; i < n; i++)
#define ia(a, n) \
    ll a[n];     \
    f(i, n) cin >> a[i]
#define iv(v, n)     \
    vector<ll> v(n); \
    f(i, n) cin >> v[i]
#define MOD (998244353)
#define INF 1000000000000000000LL // Infinity for ll
#define mp make_pair
#define nline '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"

template <typename T>
using os = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

template <typename T>
using oms = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

// read question properly
// don't forget newlines!!!!!!
// take care about cin >> t;
// comment the optimization before debugging
// ALWAYS USE FIXED << SETPRECISION WHILE OUTPUTTING FLOATS

ll po[100001];

void solve()
{
    ll n;
    cin >> n;
    iv(a,n);
    iv(b,n);

    vector<ll> posa(n), posb(n);
    f(i,n) {
        posa[a[i]] = i;
        posb[b[i]] = i;
    }

    vector<ll> ans;

    set<ll> sa, sb;

    f(i,n) {
        sa.insert(a[i]);
        sb.insert(b[i]);

        ll x = *sa.rbegin();
        ll y = *sb.rbegin();

        pair<ll,ll> p1 = mp(x, b[i - posa[x]]);
        pair<ll,ll> p2 = mp(y, a[i - posb[y]]);
        pair<ll,ll> ansp = max(p1,p2);

        ans.push_back((po[ansp.first] + po[ansp.second]) % MOD);
    }

    f(i,n) {
        cout << ans[i] << ' ';
    }
    cout << nline;
}

int main()
{
#ifdef PRADY
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    clock_t T = clock();
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long t = 1;
    cin >> t;

    po[0] = 1;
    for(int i =1 ; i<= 100000; i++) {
        po[i] = 2 * po[i-1] % MOD;
    }

    while (t--)
    {
        solve();
    }

#ifdef PRADY
    cout << "\nTime taken: " << ((float)(clock() - T)) / CLOCKS_PER_SEC << " seconds";
#endif
    return 0;
}