#include "bits/stdc++.h"

using namespace std;

void solve() {
	int n;
	int avg = 0;
	cin >> n;
	int a;
	int aj;
	for (int i = 0; i < n; ++i) {
		cin >> a;
		avg += a;
		aj = max(aj, a);
	}
	avg /= n;
	cout << avg << endl;
	cout << aj << endl << endl;
}

int main() {
	uint64_t t;
	cin >> t;
	while (t--) {
		solve();
	}
}
