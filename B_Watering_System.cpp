#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, A, B;
    cin >> n >> A >> B;
    
    vector<int> s(n);
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }
    
    // s1 is the size of the first hole
    int s1 = s[0];
    
    // Calculate the total sum of the sizes of all holes
    long long totalSum = 0;
    for (int i = 0; i < n; ++i) {
        totalSum += s[i];
    }
    
    // Maximum allowed sum to ensure flow from first hole is at least B
    long long maxAllowedSum = (1LL * s1 * A) / B;
    
    // If the total sum already satisfies the condition, no need to block any holes
    if (totalSum <= maxAllowedSum) {
        cout << 0 << endl;
        return 0;
    }
    
    // Sort the sizes of holes (excluding the first one) in decreasing order
    vector<int> rest(s.begin() + 1, s.end());
    sort(rest.rbegin(), rest.rend());
    
    // Start blocking the largest holes
    int blocked = 0;
    for (int size : rest) {
        totalSum -= size;
        blocked++;
        if (totalSum <= maxAllowedSum) {
            cout << blocked << endl;
            return 0;
        }
    }
    
    return 0;
}
