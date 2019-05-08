#include <iostream>
using namespace std;

int main()
{
	int x;
	cin >> x;
	for(int a=1;a<=x;a++)
	{
		if(a%10==0)
		{
			continue;
		}
		else if(a==42)
		{
			cout << "ERROR" << endl;
			break;
		}
		cout << a << endl;
	}
	return 0;
}
