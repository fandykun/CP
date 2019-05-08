#include<stdio.h>
#include<math.h>
int prime(int a)
{
	int i;
	for(i=2;i<=sqrt(a);i++){
		if(a%i==0){
		return 0;
		}
	}
	return 1;
}
void hasil(int b){
	int i=2;
	int j,jwb;
	int counter=0;
	while(counter<b){
		if(prime(i)==1){
			counter++;
			jwb=i;
			i++;
			}
		else i++;
	}
	printf("%d\n",jwb);
}
int main()
{
	int a;
	while(scanf("%d",&a)!=EOF){
		hasil(a);
	}
}
