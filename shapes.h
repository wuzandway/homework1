#ifndef _SHAPES_H_
#define _SHAPES_H_

#define PI 3.1415926

// Base class
class Shape {
public:
	Shape(double a = 0, double b = 0) {
		width = a; height = b;
	}
	~Shape() {}

	void setWidth(double w) {
		width = w;
	}
	void setHeight(double h) {
		height = h;
	}
	virtual double area() = 0;

protected:
	double width;
	double height;
};

class Rectangle : public Shape {
public:
	Rectangle(double a = 0, double b = 0) :Shape(a, b) { }

	double area() {
		return (width * height);
	}
};
class circle : public Shape {
public:
	circle(double a = 0, double b = 0) :Shape(a, b) { }

	double area() {
		return (width*width * PI);
	}
};
class triangle : public Shape {
public:
	triangle(double a = 0, double b = 0) :Shape(a, b) { }

	double area() {
		return (width *0.5* height);
	}
};

#endif
