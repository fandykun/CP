#include <iostream>
using namespace std;

int main()
{
	int N, A, B, buah;
	int maks,minim;
	cin >> N;
	for(int C=1;C<=N;C++)
	{
		cin >> buah;
		if(C==1)
		{
			maks=buah;
			minim=buah;
		}
		else if (maks<buah)
		maks=buah;
		else if (minim>buah)
		minim=buah;
	}
	cout << maks << " " << minim << endl;
	return 0;
}
