#include<stdlib.h>
#include<stdio.h>

int main() {
	int n[10] = {32,27,64,18,95,14,95,70,60,37};
	int i;
	printf("%s%13s\n","Element","Value");
	for (i = 0; i <= 9; i++)
	{
		printf("%7d%13d\n",i,n[i]);
	}
	system("pause");
}