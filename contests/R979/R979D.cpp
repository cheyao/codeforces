#include "bits/stdc++.h"

using namespace std;

void solve() {
	int n, q;
	cin >> n >> q;
	vector<int> v(n);
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}
	string s;
	cin >> s;
	while (q--) {
		int i;
		cin >> i;
		if (s[i] == 'L') {
			s[i] = 'R';
		} else {
			s[i] = 'L';
		}

		bool ord = true;
		for (int i = 0; i < n - 1; ++i) {
			if (v[i] < v[i + 1]) {
				ord = false;
				break;
			}
		}

		if (ord) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
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
