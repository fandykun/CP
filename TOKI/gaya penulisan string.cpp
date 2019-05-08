#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	int snake=s.find("_");
	int a=s.size();
	if(snake!=-1||65<=s[0]&&s[0]<=90){
	while(snake!=-1){
		s.erase(snake, 1);
		if(97<=s[snake]&&s[snake]<=122){
		s[snake]=s[snake]-32;
		}
		snake=s.find("_");
		}	
	}
	else{
		int slen = s.size();
		for(int i=1;i<slen;i++){
			if(65<=s[i]&&s[i]<=90){
				s[i]=s[i]+32;
				s.insert(i, "_");
				slen=s.size();
			}
		}
	}
	cout << s << endl;
}
