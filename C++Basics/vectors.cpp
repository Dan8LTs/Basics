#include <iostream>
#include <vector>

using namespace std;

static void vectors() {
	vector<int> data = { 13, 23, 2, 2, 3 };
	for (int elem : data) {
		cout << elem << " ";
	}
	cout << endl << data.size() << endl;

	vector<char> example(8, ')');
	for (char elem : example) {
		cout << elem;
	}
}