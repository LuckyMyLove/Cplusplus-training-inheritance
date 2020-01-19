#include "Classes.h"

//Figure
Figure::Figure() {
	cout << "Figure - default constructor" << endl;
	side_length = new double[3];
	dimension = 1;
}


Figure::Figure(double side1, double side2 = 0, double side3 = 0)
{
	cout  << "Figure - parameterized constructor" << endl;
	dimension = 1;
	side_length = new double[3];
	side_length[0] = side1;
	side_length[1] = side2;
	side_length[2] = side3;
}

Figure::Figure(const Figure& Figure) {
	cout << Figure.name << " - copying constructor" << endl;

	name = Figure.name;
	dimension = Figure.dimension;
	side_length = new double[3];
	side_length[0] = Figure.side_length[0];
	side_length[1] = Figure.side_length[1];
	side_length[2] = Figure.side_length[2];
}

Figure::~Figure() {
	cout << "Figure - destruktor" << endl;
	delete[] side_length;
}


void Figure::print()
{
}

void Figure::informations() {
	cout << "Name: " << name << endl;
	cout << "Dimension: " << dimension << "D" << endl;
	cout << "Length: " << side_length[0] << endl;
	if (side_length[1] >= 0) cout << "Width: " << side_length[1] << endl;
	if (side_length[2] >= 0) cout << "Height: " << side_length[2] << endl;
}

void Figure::changeData(double side1, double side2, double side3)
{
	side_length[0] = side1;
	side_length[1] = side2;
	side_length[2] = side3;
}

//Odcinek
Line::Line() {
	cout   << "Line - default constructor" << endl;
	name = "Line";
	side_length[0] = 0;
}

Line::~Line(){}


double Line::figurePerimeter() {
	cout << "Line - parimeter(conventional): " << side_length[0] << endl;
	return side_length[0];
}


//Kwadrat
Square::Square() {
	cout  << "Square - default constructor" << endl;
	name = "Square";
	dimension = 2;
	side_length[0] = 0;
	side_length[1] = 0;
}


Square::~Square() {}

double Square::figurePerimeter() {
	cout << "Square - perimeter " << (side_length[0] * 2) + (side_length[1] * 2)<< endl;
	return (side_length[0] * 2) + (side_length[1] * 2);
}


double Square::figureField() {
	cout << "Square - field: " << side_length[0] * side_length[1] << endl;
	return side_length[0] * side_length[1];
}


Cuboid::Cuboid() {
	cout  << "Cuboid - default constructor" << endl;
	name = "Cuboid";
	dimension = 3;
	side_length[0] = 0;
	side_length[1] = 0;
	side_length[2] = 0;
}


Cuboid::~Cuboid() {}


double Cuboid::figurePerimeter() {
	cout  << "Cuboid - perimeter: "<< (4 * side_length[0]) + (4 * side_length[1]) + (4 * side_length[2]) << endl;
	return (4 * side_length[0]) + (4 * side_length[1]) + (4 * side_length[2]);
}


double Cuboid::figureField() {
	cout << "Cuboid - field: " << (2 * side_length[0] * side_length[1]) + (2 * side_length[1] * side_length[2]) + (2 * side_length[0] * side_length[2]) << endl;
	return (2 * side_length[0] * side_length[1]) + (2 * side_length[1] * side_length[2]) + (2 * side_length[0] * side_length[2]);
}

double Cuboid::figureVolume() {
	cout << "Cuboid - volume: " << side_length[0] * side_length[1] * side_length[2] << endl;
	return side_length[0] * side_length[1] * side_length[2];
}