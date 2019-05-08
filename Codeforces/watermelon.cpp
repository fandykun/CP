#include <iostream>
using namespace std;
int main()
{
	int tmn;
	int jml;
	int arr[100];
	cin >> tmn;
	for(int a=1;a<=tmn;a++)
	{
		cin >> jml;
		arr[jml]=a;
	}
	for(int b=1;b<=tmn;b++)
	{
		cout << arr[b] << " ";
	}
}
