#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	int cup1=1, cup2=0, cup3=0,swit=0;
	char a[50];
	scanf("%s", &a);
	for (int b = 0; b < strlen(a); b++) {
		if (a[b] == 'A') {
			swit = cup1;
			cup1 = cup2;
			cup2 = swit;
		}
		else if (a[b] == 'B') {
			swit = cup2;
			cup2 = cup3;
			cup3 = swit;
		}
		else if (a[b] == 'C') {
			swit = cup1;
			cup1 = cup3;
			cup3 = swit;
		}
	}
	if (cup1 == 1)
		printf("1");
	else if (cup2 == 1)
		printf("2");
	else if (cup3 == 1)
		printf("3");
}