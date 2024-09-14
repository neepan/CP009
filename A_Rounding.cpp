#define debug(x) cout << '>' << #x << ':' << x << endl;

#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using mytype = long double;
using ii = pair<lli, lli>;
using vii = vector<ii>;
using vi = vector<lli>;
using bl = bool;
using mp = map<lli, lli>;
using ump = unordered_map<lli, lli>;
using str = string;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    lli n;
    cin >> n;
    
    if (n % 10 == 0) {

        cout << n << endl;

    } else {

        if (n % 10 <= 5) {

            cout << n - n % 10 << endl;

        } else {

            cout << n - n % 10 + 10 << endl;

        }

    }

    return 0;
}