#include <iostream>
using namespace std;

int main()
{
	int N;
	int temp, hasil;
	int maks=0;
	int imaks=0;
	int arr[100001]={0};
	cin >> N;
	for(int a=1;a<=N;a++)
	{
		cin >> temp;
		arr[temp]++;
	if(arr[temp]>maks)
	{
		maks=arr[temp];
	}
	if(temp>imaks)
	{
		imaks=temp;
	}
	}
	for(int b=1;b<=imaks;b++)
	{
		if(arr[b]==maks)
		{
			hasil=b;
		}
	}
	cout << hasil << endl;
}
