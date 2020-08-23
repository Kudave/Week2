#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<cmath>
int main() {
	float a, b;
	scanf("%f %f", &a, &b);
	printf("%f", sqrt((a * a) + (b * b)));
}