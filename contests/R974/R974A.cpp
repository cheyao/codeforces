#include "bits/stdc++.h"

using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	int g = 0;
	int amm = 0;
	int a;
	while (n--) {
		cin >> a;
		if (a >= k) {
			g += a;
		}
		if (a == 0 && g) {
			g--;
			amm++;
		}
	}
	cout << amm << endl;
}

int main() {
	uint64_t t;
	cin >> t;
	while (t--) {
		solve();
	}
}
