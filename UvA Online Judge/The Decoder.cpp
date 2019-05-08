#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;
	while(cin>>s){
		int n=s.size();
		for(int i=0;i<n;i++){
			s[i]-=7;
		}
		cout<<s << endl;
	}
}
