#include <iostream>
using namespace std;

int main()
{
	int i=0;
	int arr[101];
	while(cin >> arr[i]&&i<=2)
	{
		i++;
	}
	i--;
	while(i>=0)
	{
		cout << arr[i] << endl;
		i--;
	}
	return 0;
}
