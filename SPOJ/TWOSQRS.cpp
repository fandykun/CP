#include<stdio.h>

int main ()
{
	int i, j, temp;
	
	printf("masukkan nilai i dan j\n");
	scanf("%d", &i, &j);
	
	printf("sebelum swapping\ni = %d\nj = %d\n", i, j);
	
	temp = i;
	i = j;
	j = temp;
	
	printf("setelah swapping\ni = %d\nj = %d\n", i, j);
}
