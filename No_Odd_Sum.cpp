#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int c1 = 0, c2 = 0;
        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;
            if (x == 1) 
                c1++;
            else 
                c2++;
        }
        int ch1= c2;
        int ch2 = (c1 % 2 == 0) ? (c1 / 2) : ch1 + 1;
        int ans = min(ch1, ch2);
        cout << ans << endl;
    }
    return 0;
}
