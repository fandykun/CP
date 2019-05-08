#include <stdio.h>

int mult(int x, int arr[], int size){
	int carry=0, p;
	for(int i=0;i<size;i++){
		p=arr[i]*x+carry;
		arr[i]=p%10;
		carry=p/10;
	}
	while(carry!=0){
		arr[size]=carry%10;
		carry=carry/10;
		size++;
	}
	return size;
}

int main(){
	int t, arr[10000], n;
	scanf("%d", &t);
	while(t--){
		int size=1;
		arr[0]=1;
		scanf("%d", &n);
		for(int i=2;i<=n;i++){
			size=mult(i, arr, size);
		}
		for(int i=size-1;i>=0;i--){
			printf("%d", arr[i]);
		}
		printf("\n");
	}
	return 0;
}
