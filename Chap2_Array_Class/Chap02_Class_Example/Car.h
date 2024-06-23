#pragma once
#include <cstring>
#include <cstdio>
class Car {
protected:
	int speed;
	char name[40];
public:
	int gear;
	Car() {}								//기본생성자
	~Car() {}
	Car(int s, const char* n, int g)		//매개변수가 있는 생성자
		:speed(s), gear(g) {
		strcpy_s(name, n);
	}
	void changeGear(int g = 4) { // void changeGear()로 작성시 g=4
		gear = g;
	}
	void speedUp() {
		speed += 5;
	}
	void display() {
		printf("[%s] : 기어=%d단 속도 =%dkm/h\n", name, gear, speed);
	}
	void whereAmI() { printf("객체 주소 = %x\n", this); }
};