#include <iostream>
#include <string>
using namespace std;

int main()
{
	int jml;
	int anton=0;
	int danik=0;
	char ctr;
	cin >> jml;
	for(int a=1;a<=jml;a++)
	{
		cin >> ctr;
		if(ctr=='A')
		{
			anton++;
		}
		else if(ctr=='D')
		{
			danik++;
		}
	}
	if(anton==danik)
	{
		cout << "Friendship";
	}
	else if(anton>danik)
	{
		cout << "Anton";
	}
	else cout << "Danik";
}
