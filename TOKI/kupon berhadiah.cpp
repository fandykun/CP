#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int N, X;
	long arr[1001];
	long a=200000;
	long b;
	cin >> N >> X;
	for(int i=1;i<=N;i++){
		cin >> arr[i];
		long jarak=abs(X-arr[i]);
		if(a>jarak){
			a=jarak;
			b=arr[i];	
		}
		else if(a==jarak){
			if(arr[i]<b){
				b=arr[i];
			}
		}
	}
	cout << b << endl;
}
