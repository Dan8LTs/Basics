#include <iostream>

using namespace std;

static float div(float a, float b) {
	if (b == 0) throw 0;
	else return a / b;
}

static void exceptions() {
	float a, b;
	cin >> a >> b;

	try {
		cout << div(a, b);
	}
	catch (int error){
		if (error == 0) {
			cout << "division by zero";
		}
	}
}