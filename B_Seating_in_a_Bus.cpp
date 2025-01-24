#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using mytype = long double;
using ii = pair<lli, lli>;
using vii = vector<ii>;
using vi = vector<lli>;
using bl = bool;

int main()
{
    lli t;
    cin >> t;

    while (t--)
    {
        lli n;
        cin >> n;
        vi a(n);
        for (auto &x : a)
        {
            cin >> x;
        }

        vi occ(n + 2, 0);
        occ[a[0]] = 1;
        bl vl = true;
        for (int i = 1; i < n; i++)
        {

            if(occ[a[i]-1]==0 && occ[a[i]+1]==0)
            {
                vl=false;
                break;
            }
                occ[a[i]]=1;
            
        }

            if (vl)
            {
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
    }
    return 0;
}
