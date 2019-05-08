#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    while(cin>>s){
        bool cek=true;
        stack<char> par;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') par.push(s[i]);
            else if(s[i]==')'){
                if(!par.empty()) par.pop();
                else {cek=false; break;}
            }
        }
        if(!par.empty() || !cek) cout<<"incorrect"<<endl;
        else cout<<"correct"<<endl;
    }
    return 0;
}
