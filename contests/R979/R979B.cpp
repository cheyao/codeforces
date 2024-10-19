#include "bits/stdc++.h"

using namespace std;

void solve() {
	long long n;
	cin >> n;

	cout << '1';
	n--;
	for (int i = 0; i < n; ++i) {
		cout << 0;
	}

	cout << '\n';
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	uint64_t t;
	cin >> t;
	while (t--) {
		solve();
	}
}
