#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    int cnt=0;
    while(t--){
        vector<int> n(4);
        for(int i=0; i<4; i++){
            cin>>n[i];
        }
 
 
        if((n[0]+n[1]) <= (n[2]+n[3])) {
            cout<<0<<endl;
            continue;
        }
 
        if(n[0] > n[2] && n[0]>n[3] ) cnt +=2;
         if(n[1] > n[2] && n[1]>n[3] ) cnt+=2;
        
        cout<<cnt<<endl;
        cnt=0;
 
    }
    return 0;
}
