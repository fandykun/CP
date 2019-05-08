#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int N, x, y;
	cin >> N;
	for(int a=1;a<=N;a++)
	{
		cin >> x;
		int prime=0;
		for(int b=2;b<x;b++)
		{
			if(x%b==0)
			{
				prime++;
			}
			if(prime==3){
				break;
			}
		}
		if(prime<=2)
			cout << "YA" << endl;
		else cout << "BUKAN" << endl; 
	}
	return 0;
}
