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
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define cd(condition, value_if_true, value_if_false) ((condition) ? (value_if_true) : (value_if_false))
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

const int inf = 9e17;
const int mod = 1e9 + 7;
const int MAX_N = 1e6 + 5;

#pragma GCC optimize("unroll-loops,O3,Ofast")
#pragma GCC target("avx2,avx,fma,bmi,bmi2,lzcnt,popcnt")

vi factorial(MAX_N);
vi inv_factorial(MAX_N);

// Function to compute modular inverse using binary exponentiation (Fermat's Theorem)
lli mod_inv(lli x, lli y = mod - 2) {
    lli res = 1;
    while (y) {
        if (y & 1) res = res * x % mod;
        x = x * x % mod;
        y >>= 1;
    }
    return res;
}

// Function to compute factorial and inverse factorial modulo MOD
void precompute_factorials() {
    factorial[0] = 1;
    for (int i = 1; i < MAX_N; i++) {
        factorial[i] = (factorial[i - 1] * i) % mod;
    }

    // Compute modular inverse of factorial[MAX_N - 1]
    inv_factorial[MAX_N - 1] = mod_inv(factorial[MAX_N - 1]);

    for (int i = MAX_N - 2; i >= 0; i--) {
        inv_factorial[i] = (inv_factorial[i + 1] * (i + 1)) % mod;
    }
}


// Main function to process test cases
void neepan() {
    precompute_factorials();
    string s;
    cin >> s;
    
    map<char, lli> freq;
    for (char c : s) {
        freq[c]++;
    }

    lli d = 1;
    for (auto& f : freq) {
        d = (d * inv_factorial[f.ss]) % mod;
    }

    lli result = (factorial[sz(s)] * d) % mod;
    cout << result << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    
    precompute_factorials(); 
    neepan();
}
