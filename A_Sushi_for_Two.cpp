#include <bits/stdc++.h>
using namespace std;

#define fr(i, t) for (lli i = 0; i < t; i++)
#define pb push_back
#define sz(x) x.size()
#define ff first
#define ss second
#define all(v) v.begin(), v.end()
#define debug(x) cout << '>' << #x << ':' << x << endl;

using lli = long long int;
using ld = long double;
using ii = pair<lli, lli>;
using vii = vector<ii>;
using vi = vector<lli>;
using bl = bool;
using mp = map<lli, lli>;
using ump = unordered_map<lli, lli>;
using str = string;

#pragma GCC optimize("unroll-loops,O3,Ofast")
#pragma GCC target("avx2,avx,fma,bmi,bmi2,lzcnt,popcnt")

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> sushi(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> sushi[i];
    }

    int prev_length = 0;  // Length of the previous segment
    int curr_length = 1;  // Length of the current segment (starting with 1)
    int maxLength = 0;    // Maximum valid segment length

    // Traverse the array from the second element onwards
    for (int i = 1; i < n; ++i) {
        if (sushi[i] == sushi[i - 1]) {
            // If the current sushi type is the same as the previous one, increment the current segment length
            curr_length++;
        } else {
            // If the sushi type changes, update the maximum valid segment
            maxLength = max(maxLength, 2 * min(prev_length, curr_length));

            // Update the previous segment length and reset current segment length
            prev_length = curr_length;
            curr_length = 1;  // Start new segment with the current element
        }
    }

    // One final check in case the longest segment ends at the end of the array
    maxLength = max(maxLength, 2 * min(prev_length, curr_length));

    cout << maxLength << endl;  // Output the result

    return 0;
}