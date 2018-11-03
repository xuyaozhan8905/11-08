#include<stdio.h>
#include<stdlib.h>
#define Student 3
#define Exams 4
void studentgrade2(const int a[][Exams]);
int lowest(const int a[][Exams]);
int highest(const int a[][Exams]);
double average(const int a[][Exams],int k);
int main() {
	const int studentgrade1[Student][Exams] = { 77,68,86,73,96,87,89,78,70,90,86,81 };
	printf("The array is¡G\n\t\t [0]  [1]  [2]  [3]\n");
	studentgrade2(studentgrade1);
	printf("Lowest grade ¡G %d\n",lowest(studentgrade1));
	printf("Highest grade ¡G %d\n", highest(studentgrade1));
	for (int i=0;i<Student;i++)
	{
		printf("The average grade for student %d is %.2f\n",i, average(studentgrade1,i));
	}
	system("pause");
	return 0;
}
void studentgrade2(const int a[][Exams])
{
	int i, j;
	for (i=0;i<Student;i++)
	{
		printf("studentGrades[%d]",i);
		for (j=0;j<Exams;j++)
		{
			printf(" %d  ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
}
int lowest(const int a[][Exams])
{
	int i, j,abc=100;
	for (i = 0; i < Student; i++)
	{
		for (j = 0; j <Exams; j++)
		{
			if (a[i][j]<=abc)
			{
				abc = a[i][j];
			}
		}
	}
	
	return abc;
}
int highest(const int a[][Exams])
{
	int i, j, abc = 0;
	for (i = 0; i < Student; i++)
	{
		for (j = 0; j < Exams; j++)
		{
			if (a[i][j] >= abc)
			{
				abc = a[i][j];
			}
		}
	}

	return abc;
}
double average(const int a[][Exams], int k)
{
	int j;
	int sum = 0;
		for (j = 0; j < Exams; j++)
		{
			sum = sum + a[k][j];
		}
	return(double) sum /Exams;
}
