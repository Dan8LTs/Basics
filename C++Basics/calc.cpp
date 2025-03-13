#include <iostream>

using namespace std;

static void calc() {
	while (true) {
		float s1, s2;
		char math;
		cin >> s1 >> math >> s2;

		switch (math) {
		case '+': s1 += s2; break;
		case '-': s1 -= s2; break;
		case '*': s1 *= s2; break;
		case '/': s1 /= s2; break;
		}
		cout << s1;
		getchar();
		cin.get();
		cout << "\033[2J\033[1;1H";
	}
}