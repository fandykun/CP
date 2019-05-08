#include <iostream>
using namespace std;

int main()
{
	int a, b, jumlah;
	cin >> a >> b;
	if (a>0&&a<=200&&b>0&&b<=200)
	{
		jumlah=a+b;
	}
	cout << jumlah << endl;
	return 0;
}
