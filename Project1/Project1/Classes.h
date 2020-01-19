#include <iostream>
#include <string>

using namespace std;

class Figure {

public:
	string name;
	double dimension, *side_length;
	 Figure();
	 Figure(double side1, double side2, double side3);
	 Figure(const Figure& Figure);
	~Figure();

	virtual void changeData(double side1, double side2=0, double side3=0);
	virtual void informations();

	virtual void print();
};


class Line : public Figure {
public:
	Line();
	Line(double side1, double side2 = 0, double side3 = 0) :Figure(side1, side2, side3) { name = "Line"; };
	~Line();
	double figurePerimeter();

	void informations() {
		Figure::informations();
		figurePerimeter();
		cout << endl;
	}
};


class Square : public Figure {
public:
	Square();
	Square(double side1, double side2, double side3 = 0) :Figure(side1, side2, side3) { name = "Square"; dimension = 2; };
	~Square();
	double figurePerimeter();
	double figureField();

	void informations() {
		Figure::informations();
		figurePerimeter();
	    figureField();
		cout << endl;
	}
};

class Cuboid : public Figure {
public:
	Cuboid();
	Cuboid(double side1, double side2, double side3) :Figure(side1, side2, side3) { name = "Cuboid";  dimension = 3;};
	~Cuboid();
	double figurePerimeter();
	double figureField();
	double figureVolume();

	void informations() {
		Figure::informations();
		figurePerimeter();
		figureField();
		figureVolume();
		cout << endl;
	}
};

