#include <iostream>
using namespace std;

int main()
{
	int prime=0;
	int x;
	cin >> x;
	for(int a=2;a<x;a++)
	{
		if(x%a==0) 
		{
			prime=1;
			break;
		}
	}
	if(x<2 || prime==1)
		cout << "Bilangan non prima" << endl;
	else 
		cout << x << endl;
	return 0;
}
