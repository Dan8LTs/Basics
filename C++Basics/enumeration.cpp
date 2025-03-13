#include <iostream>
#include <string>

using namespace std;

enum Options {
	open,
	close, 
	wait, 
	del
};

struct File {
	int weight;
	string name;
	Options option;
};

static void enumeration() {
	File f;
	f.weight = 2;
	f.name = "test.txt";
	f.option = Options::close;

	if (f.option == Options::close) {
		cout << "File is closed" << endl;
	}

	cout << f.option;
}