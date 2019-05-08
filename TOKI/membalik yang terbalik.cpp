#include <bits/stdc++.h>
using namespace std;

long reverse(long x)
{
	long temp = x;
	long ret = 0;
	while(temp > 0)
	{
		ret = (ret*10) + (temp%10);
		temp/=10;
	}
	return ret;
}
int main()
{
	long A, B, C, D, E;
	cin >> A >> B;
	C=reverse(A);
	D=reverse(B);
	E=reverse(C+D);
	cout << E << endl;
}
