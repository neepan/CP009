#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int n, K;
    cin >> n >> K;
    vector<int> word_lengths(n);
    for (int i = 0; i < n; ++i) {
        cin >> word_lengths[i];
    }

    unordered_map<int, int> length_count;
    for (int length : word_lengths) {
        length_count[length]++;
    }

    int days = 0;
    for (const auto &[length, count] : length_count) {
        cout << "Length: " << length << ", Count: " << count << endl; // Debug statement
        days += (count + K - 1) / K; // ceil(count / K)
    }

    cout << "Total days: " << days << endl; // Debug statement

    return 0;
}