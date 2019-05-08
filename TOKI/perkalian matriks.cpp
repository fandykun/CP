#include <iostream>
using namespace std;

int main()
{
	int N, M, P;
	cin >> N >> M >> P;
	int mtr1[N+1][M+1];
	int mtr2[M+1][P+1];
	int kali[N+1][P+1];
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=M;j++)
		{
			cin >> mtr1[i][j];
		}
	}
	for(int i=1;i<=M;i++)
	{
		for(int j=1;j<=P;j++)
		{
			cin >> mtr2[i][j];
		}
	}
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=P;j++)
		{
			kali[i][j]=0;
			for(int k=1;k<=M;k++)
			{
				kali[i][j]+=mtr1[i][k]*mtr2[k][j];
			}
		}
	}
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=P;j++)
		{
			cout << kali[i][j];
			if(j<P) cout << " ";
		}
		cout << endl;
	}
}
