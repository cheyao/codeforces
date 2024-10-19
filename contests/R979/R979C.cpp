#include "bits/stdc++.h"

using namespace std;

void solve() {
	int n;
	cin >> n;

	std::string s;
	cin >> s;

	bool t = false;
	for (int i = 0; i < n - 1; ++i) {
		if (s[i] == '1' && s[i + 1] == '1') {
			t = true;;
			break;
		}
	}

	if (t || s[0] == '1' || s[n - 1] == '1') {
		cout << "YES\n";
	} else {
		cout << "NO\n";
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
