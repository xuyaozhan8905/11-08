#include<stdio.h>
#include<stdlib.h>
#define size 10
int main() {
	int i,j;
	int a[size] = {19,3,15,7,11,9,13,5,17,1};

	printf("%s%13s%17s","Element","Value","Histogram\n");
	for (i = 0; i < 10; i++) {
		printf("%7d%13d\t", i, a[i]);
		for (j = 1; j <= a[i]; j++) {
			printf("*");
		}
		printf("\n");
	}
	system("pause");
}