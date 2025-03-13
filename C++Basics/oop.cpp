#include <iostream>

using namespace std;

class Building {
private:
	int year;
	string name;
public:
	Building(int year, string name) {
		this->year = year;
		this->name = name;
	}

	~Building() {
		cout << "Object was deleted" << endl;
	}
		
	void get_info() {
		cout << name << ": " << year << endl;
	}
};

static void oop() {
	Building school(2000, "Gymnasium #4");
	school.get_info();
	
}