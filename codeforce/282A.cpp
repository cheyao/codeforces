#include <cstdint>
#include <iostream>
#include <string>

using namespace std;

int main() {
	uint64_t lines;
	cin >> lines;

	int64_t x = 0;

	string s;
	while (lines--) {
		cin >> s;
		if (s.find('+') != std::string::npos) {
			++x;
		} else {
			--x;
		}
	}

	cout << x;
}
