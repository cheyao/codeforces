#include <cstdint>
#include <iostream>

using namespace std;

int main() {
	uint64_t lines;
	cin >> lines;

	uint64_t sum = 0;

	int a, b, c;
	while (lines--) {
		cin >> a >> b >> c;
		sum += (a + b + c) >= 2;
	}

	cout << sum;
}
