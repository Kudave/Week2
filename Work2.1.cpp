#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string>
int main() {
	int b, c = 0, d = 0;
	char a[10000];
	scanf("%s", &a);
	for (b = 0; b < strlen(a); b++) {
		if (a[b] >= 'A' && a[b] <= 'Z')
			c += 2;
		else if (a[b] >= 'a' && a[b] <= 'z')
			c += 1;
		else {
			d = 1;
			break;
		}
	}
	if (c == (strlen(a) * 2))
		printf("All Capital Letter");
	else if (c == strlen(a))
		printf("All Small Letter");
	else if (d == 1)
		printf("Error");
	else
		printf("Mix");
}