#include <bits/stdc++.h>
using namespace std;
const int maxn = 100001;

bool check[maxn] { };
int num[maxn];

int main(){
    string s;
    cin >> s;
    for(int i = 0;i < s.size();i++){
        num[i] = s[i] - '0';
    }
    for(int i = 0;i < s.size();i++){
       int curr = 0;
       for(int j = 0;j < 5;j++){
            if(i + j >= s.size()) break;
           curr = curr*10 + num[i + j];
           check[curr] = true;
       }
    }
    for(int i = 0;i <= 100001;i++){
        if(check[i] == false){
            cout << i << endl;
            break;
        }
    }
    return 0;
}
