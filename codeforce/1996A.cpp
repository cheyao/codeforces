#include <cstdint>
#include <iostream>

using namespace std;

int main (int argc, char *argv[]) {
	uint64_t lines;
	cin >> lines;

	while (lines--) {
		uint64_t num;
		cin >> num;
		uint64_t count = num / 4 + num % 4 / 2;
		cout << count << endl;
	}

	return 0;
}
