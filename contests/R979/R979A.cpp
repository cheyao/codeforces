#include "bits/stdc++.h"
#include <limits>

using namespace std;

int solve() {
	int n;
	cin >> n;
	if (n == 1) {
		cin >> n;
		return 0;
	}

	int min = std::numeric_limits<int>::max(), max = std::numeric_limits<int>::min();
	int loop = n;

	while (loop--) {
		int i;
		cin >> i;
		min = std::min(i, min);
		max = std::max(i, max);
	}

	return (max - min) * (n - 1);
}

int main() {
	uint64_t t;
	cin >> t;
	while (t--) {
		cout << solve() << '\n';
	}
}
