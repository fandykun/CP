#include <iostream>
using namespace std;

int urut(int x)
{
	if(x<=9) return x;
	else return urut(x%10);
}
int main()
{
	int N;
	cin >> N;
	int z=0;
	for(int a=1;a<=N;a++)
	{
		for(int b=1;b<=N;b++){
			if(b<=a){
				cout << urut(z);
				z++;
			}
		}
		cout << endl;
	}
	return 0;
}
