#include <iostream>
#include <fstream>
#include <string>

using namespace std;

static void files() {
	ofstream out("file.txt", ios::app);
	if (out.is_open()) {
		out << "something useful";
	}
	out.close();

	string line;
	ifstream in("file.txt");
	if (in.is_open()) {
		while (getline(in, line)) {
			cout << line << endl;
		}
		in.close();
	}
	
	
	cout << "press d to delete file.txt" << endl;
	
	if (getchar() == 'd') {
		if (!remove("file.txt")) {
			cout << "file was deleted";
		}
	}
}