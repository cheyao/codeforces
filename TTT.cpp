// Small Tick Tack Toe

#include <cstdint>
#include <iostream>
#include <unordered_map>
#include <vector>
#include <termios.h>
#include <unistd.h>

using namespace std;

enum TILE { EMPTY, X, O};
vector<vector<TILE>> board = {
	{EMPTY, EMPTY, EMPTY},
	{EMPTY, EMPTY, EMPTY},
	{EMPTY, EMPTY, EMPTY}
};

struct Node {
	uint64_t score;
	unordered_map<uint64_t, Node*> next;
};

void printBoard() {
	cout << "\033[2J\033[H";
	cout << "+---+---+---+\n";

	for (const auto& b : board) {
		cout << "|";
		for (const auto& s : b) {
			switch (s) {
				case EMPTY:
					cout << "   ";
					break;
				case X:
					cout << " X ";
					break;
				case O:
					cout << " O ";
					break;
			}
			cout << "|";
		}
		cout << "\n+---+---+---+\n";
	}
	cout << endl;
}

const static bool inside(const int& x, const int y) {
	return (x >= 0 && x < board[0].size() &&
		y >= 0 && y < board.size());
}

int win() {
	return 0;
}

void makeGraph() {
}

int main() {
	// Init term
	static struct termios oldt, newt;
	tcgetattr(STDIN_FILENO, &oldt);
	newt = oldt;

	newt.c_lflag &= ~(ICANON);          

	tcsetattr(STDIN_FILENO, TCSANOW, &newt);
	makeGraph();

start:
	
	printBoard();
	// Loop
	while (1) {
		printBoard();

		char a = getchar();
		if (a == 'q') {
			break;
		}
		if (!isdigit(a)) {
			continue;
		}

		char b = getchar();
		if (b == 'q') {
			break;
		}
		if (!isdigit(b)) {
			continue;
		}
		
		b -= '1';
		a -= '1';

		if (!inside(a, b) || board.at(b).at(a) != EMPTY) {
			continue;
		}

		board.at(b).at(a) = X;
	}
	printBoard();
	cout << "Restart? (y) " << endl;
	if (getchar() == 'y') {
		goto start;
	}

	// Restore settings
	tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
}
