#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
{
    string s;
    cin>>s;
    if(sz(s)<3){
        cout<<"NO"<<endl;
        continue;
    }
 
    string t=s.substr(2);
    const lli a=stoll(s.substr(0,2)),b=stoll(t);
 
    if(a!=10||b<2||t!=to_string(b)){
        cout<<"NO"<<endl;
    } else {
        cout<<"YES"<<endl;
    }
 
}
    return 0;
}


