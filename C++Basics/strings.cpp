#include <iostream>
#include <string>

using namespace std;

static void strings() {
	char word[] = "what";
	for (char el : word) {
		cout << el;
	}
	cout << endl;

	string words;
	getline(cin, words);
	words[0] = toupper(words[0]); 
	cout << endl << words << endl;

	string text = "some text...";
	cout << text.size() << endl;
	text.pop_back();
	cout << text << endl;
	text.push_back('8');
	cout << text << endl;
	text.resize(4);
	cout << text;
}