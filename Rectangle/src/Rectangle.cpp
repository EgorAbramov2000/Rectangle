//============================================================================
// Name        : Rectangle.cpp
// Author      : Egor Abramov
// Version     :
// Copyright   : Your copyright notice
// Description : Finds an area and perimeter of a rectangle, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Rectangle{ //class with data and needed functions
	public:
		float length;
		float width;

		void getArea();
		void getPerimeter();
};

void Rectangle::getArea(){ //function to get area and check if the rectangle is square
	if (length == width){
		cout << "It is a square \n";
	}
	float area = length*width;
	cout << "Area of your rectangle is " << area << "\n";
}

void Rectangle::getPerimeter(){ //function to get perimeter
	float perimeter = (length+width)*2;
	cout << "Perimeter of your rectangle is " << perimeter << "\n";
}

int main() { //main function
	Rectangle inputRec; //object inputRec of class Rectangle

	cout << "Enter the length of your rectangle: \n"; //input
	cin >> inputRec.length;
	cout << "Enter the width of your rectangle: \n";
	cin >> inputRec.width;

	inputRec.getArea(); //call functions
	inputRec.getPerimeter();

	return 0;
}
