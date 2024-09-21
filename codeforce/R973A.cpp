#include "bits/stdc++.h"

using namespace std;

void solve() {
	int n, x, y;
	cin >> n >> x >> y;
	cout << n / min(x, y) + (n % min(x, y) == 0 ? 0 : 1) << endl;
}

int main() {
	uint64_t t;
	cin >> t;
	while (t--) {
		solve();
	}
}
