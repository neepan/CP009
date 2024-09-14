#include<bits/stdc++.h>
using namespace std;
 
#define fr(i,n) for (lli i=0;i<n;i++)
#define pb push_back
#define sz(x) x.size()
#define ff first
#define ss second
#define all(v) v.begin(), v.end()
#define debug(x) cout << '>' << #x << ':' << x << endl;
 
using lli = long long int;
using ld = long double;
using ii = pair<lli,lli>;
using vii = vector<ii>;
using vi = vector<lli>;
using bl =bool;
using mp=map<lli,lli>;
using ump=unordered_map<lli,lli>;
using str=string;
 
#pragma GCC optimize("unroll-loops,O3,Ofast")
#pragma GCC target("avx2,avx,fma,bmi,bmi2,lzcnt,popcnt")
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    lli n, d;
    cin >> n >> d;

    vi arr(n);
    lli cnt = 0;

    for (lli i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Check between consecutive hotels
    for (lli i = 0; i < n - 1; i++) {
        lli dist = arr[i + 1] - arr[i];
        if (dist > 2 * d) {
            cnt += 2;  // Two places possible
        } else if (dist == 2 * d) {
            cnt += 1;  // One place possible
        }
    }

    // Always two valid positions at the edges
    cnt += 2;

    cout << cnt << endl;

    return 0;
}
