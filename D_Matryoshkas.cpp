#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    ll t, n, i, j, ans;
    
    cin>>t;
    
    for(;t--;)
    {
        cin>>n;
        ans=0;
        
        ll a[n];
        
        vector<pair<ll, ll>> b;
        
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        
        sort(a, a+n);
        reverse(a, a+n);
        
        for(i=0; i<n;){
            j=i;
            
            while(i<n && a[i]==a[j]){
                i++;
            }
            
            b.push_back({a[j], i-j});
        }
        
        n=b.size();
        
        ans=b[0].second;
        
        for(i=1; i<n; i++){
            if(b[i].first+1==b[i-1].first){
                ans=ans+max(b[i].second-b[i-1].second, 0ll);
            }else{
                ans=ans+b[i].second;
            }
        }
        
        cout<<ans<<"\n";
        
        
    }
}