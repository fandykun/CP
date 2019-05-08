#include <cstdio>
using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int i=0;i<n;i++) scanf("%d", &arr[i]);
	int i=0, t=n-1, sum1=0, sum2=0, turn=1;
	while(i<=t){
		int temp=0;
		if(arr[i]>arr[t]){
			temp=arr[i];
			arr[i]=0;
			i++;
		}else if(arr[i]<arr[t]){
			temp=arr[t];
			arr[t]=0;
			t--;
		}else if(arr[i+1]>arr[t-1]){
			temp=arr[i];
			arr[i]=0;
			i++;
		}else if(arr[i+1]<arr[t-1]){
			temp=arr[t];
			arr[t]=0;
			t--;
		}
		if(turn%2==1) sum1+=temp;
		else sum2+=temp;
		turn++;
		if(i==t){
			if(turn%2==1) sum1+=arr[i];
			else sum2+=arr[i];
			break;
		}
	}
	printf("%d %d\n", sum1, sum2);
}

