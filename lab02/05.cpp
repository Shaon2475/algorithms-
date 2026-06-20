#include <iostream>
using namespace std;

double areaRectangle(double length, double width) {
    return length * width;
}
double areaSquare(double side) {
    return side * side;
}
double areaRhombus(double d1, double d2) {
    return (d1 * d2) / 2;
}
double areaParallelogram(double base, double height) {
    return base * height;
}
double areaTrapezoid(double base1, double base2, double height) {
    return ((base1 + base2) * height) / 2;
}

int main(){
            double length, width, side, d1, d2, base, base1, base2, height;
            cout << "Enter length and width of the rectangle: ";
            cin >> length >> width;
            double area1=areaRectangle(length, width);
            cout << "Area of Rectangle: "<<area1<< endl;


            cout << "Enter side of the square: ";
            cin >> side;
            double area2= areaSquare(side);
            cout << "Area of Square: " << area2 << endl;


            cout << "Enter the lengths of the diagonals of the rhombus: ";
            cin >> d1 >> d2;
            double area3=areaRhombus(d1, d2);
            cout << "Area of Rhombus: " << area3 << endl;



            cout << "Enter base and height of the parallelogram: ";
            cin >> base >> height;
            double area4=areaParallelogram(base, height);
            cout << "Area of Parallelogram: " << area4<< endl;



            cout << "Enter the lengths of the two bases and the height of the trapezoid: ";
            cin >> base1 >> base2 >> height;
            double area5=areaTrapezoid(base1, base2, height) ;
            cout << "Area of Trapezoid: " << area5 << endl;

    }


