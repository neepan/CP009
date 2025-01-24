#include<bits/stdc++.h>
using namespace std;
int main()
{
     string sen;
     cin>>sen;
   //   int hash[26] = {0};
   map<char , int>mpp;

     for(int i=0;i<sen.size();i++)
     {
         mpp[sen[i]]++;
     }
       for(auto i : mpp)
     {
         cout<<i.first<<" "<<i.second<<endl;
     }
     for(int i = 0;i<26; i++)
     {
        if(mpp[sen[i]] == 0)
        {
            cout<<"false";
            break;
        }
     }
     cout<< true;
     
        
}