#include <bits/stdc++.h>
using namespace std;

#define fr(i, n) for (lli i = 0; i < n; i++)
#define fr1(i, n) for (lli i = 1; i <= n; i++)
#define pb push_back
#define sz(x) (lli) x.size()
#define ff first
#define ss second
#define all(v) v.begin(), v.end()
#define debug(x) cout << '>' << #x << ':' << x << endl;

using lli = long long int;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    lli t;
    cin >> t;

    while (t--)
    {
        lli n, m;
        cin >> n >> m;

        lli arr[n][m];
        fr(i, n) fr(j, m) cin >> arr[i][j]; // Input for the 2D array

        if (n == 1 && m == 1)
        {
            cout << -1 << endl;
        }
        else if (n == 1)
        {
            fr1(i, m)
            {
                cout << arr[0][i%m] << " ";
            }
            cout << endl;
        }
        else
        {
            fr1(i, n)
            {
                fr(j, m)
                {
                    cout << arr[i%n][j] << " ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}
