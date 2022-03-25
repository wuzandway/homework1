#include <iostream>
using namespace std;
#include <stdlib.h>
#include <string.h>
#include "shapes.h"

const char *usage = "Usage: a.out [type] [num1] [num2] \n"
		    "	type - circle, rectangle, triangle \n"
		    "	num1 - width or radius \n"
		    "	num2 - length \n";

int main(int argc, char *argv[])
{
	double num1 = 0, num2 = 0;

	if (argc < 3) {
	    cout << usage << endl;
	    return -1;
	} else {
		num1 = atof(argv[2]);
		if (argc == 4)
			num2 = atof(argv[3]);
	}

	Shape *shape;
	Rectangle rect;
	circle cir;
	triangle tri;

  if (strcmp(argv[1], "rectangle") == 0){
		shape = &rect;
	}

	else if (strcmp(argv[1], "triangle") == 0){
    shape = &tri;
	}
	else if (strcmp(argv[1], "circle") == 0){
		shape = &cir;
	}

	else {
		cout << "Error! Unknown shape type" << endl;
		return -2;
	}

	shape->setWidth(num1);
	shape->setHeight(num2);

	// Print the area of the object.
	cout << shape->area() << endl;

	return 0;
}
