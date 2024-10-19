#include "bits/stdc++.h"
#include <cstdint>
#include <sys/types.h>

using namespace std;

void solve() {
	uint64_t n, k;
	cin >> n >> k;
	/*

	uint64_t l = 0;

	for (uint64_t i = (n - k + 1); i <= n; ++i) {
		l += (i % 2);
	}

	if (l % 2 ==0) {
		cout << "yes" << endl;
	} else {
		cout << "no" << endl;
	}
		*/
	if (k == 2) {
		cout << "no" << endl;
	} else if (k % 2 == 0) {
		cout << "yes" << endl;
	} else if ((n + k) % 2 != 0) {
		cout << "yes" << endl;
	} else {
		cout << "no" << endl;
	}
}

int main() {
	uint64_t t;
	cin >> t;
	while (t--) {
		solve();
	}
}
