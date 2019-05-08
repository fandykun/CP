#include <bits/stdc++.h>
using namespace std;



int main(){
    int n;
    set<string> check;
    scanf("%d", &n);
    while(n--){
        string s;
        set<char>cek;
        cin >> s;
        sort(s.begin(), s.end());
        for(int i=0;i<s.size();i++) cek.insert(s[i]);
        if(check.count(cek)) check.insert(cek);
    }
    cout<<check.size()<<endl;
}
