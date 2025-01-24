#include<bits/stdc++.h>
using namespace std;
 
using lli = long long int;
using mytype = long double;
using ii = pair<lli,lli>;
using vii = vector<ii>;
using vi = vector<lli>;
using bl =bool;
 
int main(){
int a[5][5];
int pos_x = -1, pos_y = -1;

    // Input the matrix
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> a[i][j];
            if (a[i][j] == 1) {
                pos_x = i;
                pos_y = j;
            }
        }
    }

    // Calculate the number of moves needed to move '1' to the center (2,2)
    int center_x = 2;
    int center_y = 2;
    int moves = abs(center_x - pos_x) + abs(center_y - pos_y);

    // Output the result
    cout << moves << endl;

    return 0;
}