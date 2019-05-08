#include <iostream>
using namespace std;

int main()
{
	int x,y;
	cin >> x;
	for(int a=1;a<=x;a++) // kolom //
	{
		for(int b=1;b<=x-1;b++) // baris //
		{
			if(b>=a){
			cout << " ";
			}
		}
		for(int c=1;c<=a;c++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
