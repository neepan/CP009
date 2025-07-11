#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
#define INF(t) numeric_limits<t>::max()

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	const int N_MAX = int(1e5) + 1;
	vector<int> lf(N_MAX, 1);
	for(int i = 4; i <= N_MAX; i++) {
		for(int j = 2; j <= sqrt(i); j++) {
			if(i % j == 0) {
				lf[i] = i/j;
				break;
			}
		}
	}

	int tc; cin >> tc;
	while(tc--) {
		int n; cin >> n;
		vector<int> v(n);
		for(int i = 1; i <= n; i++) v[i-1] = i;

		for(int i = n; i > 1; i--) {
			if(lf[i] == 1) continue;
			swap(v[i-1], v[lf[i]-1]);
		}

		for(auto &x : v) cout << x << " ";
		cout << "\n";
	}

	return 0;
}