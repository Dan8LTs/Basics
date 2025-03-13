#include <iostream>
#include <string>

using namespace std;

void print(int n) {
	cout << n << endl;
}
void print(string s) {
	cout << s << endl;
}

int add(int a, int b);

static void functions() {
	print("I like c++");
	print(add(5, 3));
}

int add(int a, int b) {
	return a + b;
}