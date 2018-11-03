#include<stdlib.h>
#include<stdio.h>
int main(){
	int n[10];
	int a;
	
	for(a=0;a<10;a++){
		n[a]=0;
	}
	
	printf("%s%13s\n","Element","Value");
	
	for(a=0;a<10;a++){
		printf("%7d %13d\n",a,n[a]);
	}
	
	system("pause");
	return 0;
	
} 