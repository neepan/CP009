#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = INT_MIN,  max_sum = 0;
        cin >> n;

        for (int i = 2; i <= n; i++)
        {
            int sum=0;
            for (int j = 1; i*j <= n; j++)
            {
             sum+=i*j;   
            }
            if(sum>max_sum){
                max_sum=sum;
                ans=i;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}