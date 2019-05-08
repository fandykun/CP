#include <iostream>
using namespace std;

int main()
{
	int N,K;
	int i=1;
	cin >> N >> K;
	while(i<=N)
	{
		if(i%K==0) 
			cout << "*";
		else
			cout << i;
		if(i!=N)
		{
		cout << " ";
		}
		i++;
	}
	cout << endl;
	return 0;
}
