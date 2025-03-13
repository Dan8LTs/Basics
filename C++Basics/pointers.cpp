#include <iostream>

using namespace std;

int sum(int* arr, int len) {
	int s = 0;
	for (int i = 0; i < len; i++) {
		s += *(arr+i);
	}
	return s;
}

static void pointers() {
	string s = "Welcome";
	string &link = s;
	s = "Something";

	cout << &s << endl;
	cout << &link<< endl;
	cout << link << endl;


	string* ptr;
	ptr = &s;
	*ptr = "Something else";
	ptr = nullptr;
	cout << s << endl;
	cout << ptr << endl;

	int array[] = {4, 3, 2, 1};
	cout << sum(array, 4);
}