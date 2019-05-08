#include <stdio.h>
#include <stdlib.h>
int main()
{
	int nilai;
	scanf("%d", &nilai);
	if(nilai>=71)
	{
		printf("A");
		if(nilai<=80) printf("B");
	}
	else if(nilai>=60)
	{
		printf("B");
		if(nilai<=70) printf("C");
	}
	else if(nilai>=40)
	{
		printf("C");
	}
	else printf("E");
	printf(" \n");
}
