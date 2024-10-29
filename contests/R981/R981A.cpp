#include "bits/stdc++.h"

using namespace std;

int solve() {
	int n;
	cin >> n;
	if (n % 2) {
		std::cout << "Kosuke\n";
	} else {
		std::cout << "Sakurako\n";
	}

	return 0;
}

int main() {
	uint64_t t;
	cin >> t;
	while (t--) {
		solve();
	}
}
