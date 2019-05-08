#include <cstdio>
using namespace std;

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int arr[n], sum=0;
		for(int i=0;i<n;i++){
			scanf("%d", &arr[i]);
		}
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(arr[i]>arr[j]){
					int temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
					sum++;
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n", sum);
	}
}
