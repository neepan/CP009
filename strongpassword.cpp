#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    string s;
    cin>>s;
     
     int n=s.size();
     string ans[n+1];
        int j=0;
     for(int i=0; i<n+1; i++){
            if(s[j]==s[j+1]==s[j+2]){
                ans[i]=s[j];
                j++;
                
            }
            else if(s[j] == s[j+1]){
                ans[i]=s[j];
                
            }
            else{
                ans[i]=s[j];
                j++;
            }
     }


    
    return 0;
}