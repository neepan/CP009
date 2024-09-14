#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        vector<int> n(3);
        for(int i=0;i<3;i++){
            cin >> n[i];
        }
        int xc = n[0], yc = n[1], k = n[2];

        // Place the first point at the center
        cout << xc << " " << yc << endl;

        // Place the remaining k-1 points in a circle around the center
        for(int i=1; i<k; i++){
            int xi = xc + (i % 3) - 1; // distribute points in a small circle
            int yi = yc + ((i / 3) % 3) - 1; // distribute points in a small circle
            cout << xi << " " << yi << endl;
        }
    }
    return 0;
}