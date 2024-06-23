#pragma once
#include <cstring>
#include <cstdio>
class Car {
protected:
	int speed;
	char name[40];
public:
	int gear;
	Car() {}								//�⺻������
	~Car() {}
	Car(int s, const char* n, int g)		//�Ű������� �ִ� ������
		:speed(s), gear(g) {
		strcpy_s(name, n);
	}
	void changeGear(int g = 4) { // void changeGear()�� �ۼ��� g=4
		gear = g;
	}
	void speedUp() {
		speed += 5;
	}
	void display() {
		printf("[%s] : ���=%d�� �ӵ� =%dkm/h\n", name, gear, speed);
	}
	void whereAmI() { printf("��ü �ּ� = %x\n", this); }
};