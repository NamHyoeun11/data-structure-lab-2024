#include <cstdio>
//#include "Car.h"
//#include "SportsCar.h"
/*
void main() {
	//Car Ŭ���� ���
	Car myCar(50, "K3", 4);
	Car yourCar(100, "K5", 3);
	myCar.display();
	yourCar.display();
	myCar.whereAmI();
	yourCar.whereAmI();

	//SportsCar Ŭ���� ���
	SportsCar scar;
	scar.speedUp();

}*/
#include "Rectangle.h"
using namespace std;

void main() {
	Rectangle r(10, 20);
	double perimeter=r.getPerimeter();
	double area = r.getArea();
	std::cout << "Rectangle 1:" << std::endl;
	std::cout << "Area:" << r.getArea() << std::endl;
	cout << "Perimeter" << perimeter << endl;
	cout << "Is square?" << boolalpha << r.isSquare() << endl;

}