#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin >> t;

    while (t--)
    {
        long long n, k;
        cin >> n >> k;

        if(k < n){
            cout << (k > 0) << endl;
            continue;
        }
        k -= n;
        long long cnt = 1;  // cnt=1 beacuse  we have included k elements in n diagonal

        long long dia = n - 1; //after we have fill the n diagonal we will go to n-1 diagonal to fill it.

        while(k > 0){
            k -= dia;
            cnt++;

            if(k <= 0) break;
            // we have 2 diagonals with n-1, n-2,... thats why we are doing the same process below
            
            k -= dia;
            cnt++;

            dia--;
        }
        cout << cnt << endl;
    }
    return 0;
}