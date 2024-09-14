#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &it:a){
            cin>>it;
        }
        if(n==2 && a[1]-a[0]>1){
            cout<<"yes"<<endl;
        }
        else
        cout<<"no"<<endl;
    }
            
    return 0;
}