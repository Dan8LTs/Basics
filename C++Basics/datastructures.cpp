#include <iostream>
#include <math.h>

using  namespace std;

struct Position {
	int x, y;
};

struct Tree {
	string name;
	int age;
	Position pos;

	void get_info() {
		cout << name << ": " << age << endl;
	}
};

static void datastructures() {
	Tree bereza;
	bereza.name = "Берёза";
	bereza.age = 21;
	bereza.pos.x = 1;
	bereza.pos.y = 4;
	bereza.get_info();

	Tree lipa;
	lipa.name = "Липа";
	lipa.age = 32;
	lipa.pos.x = 5;
	lipa.pos.y = 1;
	lipa.get_info();

	int a = fabs(bereza.pos.x - lipa.pos.x);
	int b = fabs(bereza.pos.y - lipa.pos.y);
	cout << sqrt(a * a + b * b);
}


//B. . . .
//. . . . .
//. . . . .
//. . . . L