#include <iostream>

using namespace std;

static void ifelse() {
	int s;
	while (true) {
		cin >> s;

		if (s > 5 && s < 100) {
			cout << s << " is more than 5 but less than 100";
		}
		else if (s < 5) {
			cout << s << " is less than 5";
		}
		else if (s > 100) {
			cout << s << " is more than 100";
		}

		switch (s) {
		case 5:
			cout << s << " = 5";
			break;
		case 100:
			cout << s << " = 100";
			break;
		}

		getchar();
		cin.get();
		cout << "\033[2J\033[1;1H";
	}
}