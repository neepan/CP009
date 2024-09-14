#include <iostream>

using namespace std;

int count_wins(int a1, int a2, int b1, int b2) {
    int wins = 0;
    if (a1 > b1 && a2 > b2) wins++;
    if (a1 > b2 && a2 > b1) wins++;
    if (a1 > b1 && a1 > b2) wins++;
    if (a2 > b1 && a2 > b2) wins++;
    return wins;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        cout << count_wins(a1, a2, b1, b2) << endl;
    }
    return 0;
}