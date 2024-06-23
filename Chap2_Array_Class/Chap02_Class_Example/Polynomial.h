#pragma once
#define MAX_DEGREE 80
#include <stdio.h>

class Polynomial{
	int degree;
	float coef[MAX_DEGREE];
public:
	Polynomial () {degree = 0; }
	void read() {
		printf("다항식의 최고 차수를 입력하시오: ");
		scanf_s("%d", &degree);
		printf("각 항의 계수를 입력하시오 (총 %d 개): ", degree+1);
		for (int i = 0; i <= degree; i++) {
			scanf_s("%f", coef+i);
		}
	}
	void display(const char *str ="Poly=") {
		printf("Poly = ");
		for (int i = 0; i < degree; i++)
			printf("%5.1fx^%d +", coef[i], degree - i);
		printf("%4.1f\n", coef[degree]);
	}

	void add(Polynomial a, Polynomial b) {
		if (a.degree > b.degree) {
			*this = a;
			for (int i = 0; i <= b.degree; i++)
				coef[i + (degree - b.degree)] += b.coef[i];
		}
 else {
			*this = b;
			for (int i = 0; i <=a.degree; i++)
				coef[i + (degree - a.degree)] += a.coef[i];
		}
	}
};