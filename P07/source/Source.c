#include<stdio.h>
#include<stdlib.h>
#define size 12

int main() {
	int a[size] = {1,3,5,4,7,2,99,16,45,67,89,45};
	int i;
	int total = 0;
	for (i=0;i<size;i++)
	{
		total += a[i];
	}
	printf("The total is %d\n",total);
	system("pause");
}