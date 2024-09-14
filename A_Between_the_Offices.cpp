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

int main()
{
    lli t;
    cin >> t;
    int cnts=0;
    int cntf=0;
    string s;
    cin>>s;


    for (int i = 0; i < t; i++)
    {
        if(s[i]=='S' && s[i+1]=='F'){
            cnts++;
        }
        else if(s[i]=='F' && s[i+1]=='S')cntf++;
        }
    if(cnts>cntf) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}