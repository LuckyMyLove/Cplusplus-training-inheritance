#include <iostream>
#include <string>
#include "Classes.h"

using namespace std;


int main() {
		Line* line1 = new Line;
		cout << endl;
		Line* line2 = new Line(10);
		cout << endl;

		Square* square1 = new Square;
		cout << endl;
		Square* square2 = new Square(4, 6);
		cout << endl;

		Cuboid* cuboid1 = new Cuboid;
		cout << endl;
		Cuboid* cuboid2 = new Cuboid(2, 3, 5);
		cout << endl;

		line1->informations();
		line2->informations();
		square1->informations();
		square2->informations();
		cuboid1->informations();
		cuboid2->informations();
		cout << endl;
		cout << endl;

		cout << "line1 - changing data: " << endl;
		line1->changeData(12);
		line1->informations();

		cout << endl;
		cout << "square1 - changing data: " << endl;
		square1->changeData(12,18);
		square1->informations();

		cout << endl;
		cout << "cuboid2 - changing data: " << endl;
		cuboid1->changeData(7, 19,4);
		cuboid1->informations();

		delete line2; 
		delete square2;
		delete cuboid2;

	Figure** table = new Figure * [3];

	table[0] = new Line(5);
	table[1] = new Square(5,5);
	table[2] = new Cuboid(5,5,5);

	for (int i = 0; i < 3; i++) {
		cout << endl;
		table[i]->informations();
	}

	for (int i = 0; i < 3; i++) {
		cout << endl;
		delete table[i];
	}

	delete[] table;


	getchar();
	return 0;
}