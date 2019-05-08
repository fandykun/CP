#include <iostream>
using namespace std;

int main()
{
	int arr[101][101];
	int M, N;
	cin >> M >> N;
	for(int i=1;i<=M;i++)
	{
		for(int j=1;j<=N;j++)
		{
			cin >> arr[i][j];
		}
	}
	for(int i=1;i<=N;i++)
	{
		int Z=M;
		while(Z>=1)
		{
			cout << arr[Z][i];
			if(Z>1) cout << " ";
			Z--;
		}
		cout << endl;
	}
}
