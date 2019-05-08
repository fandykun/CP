#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, ans = 0;
    string s;
    cin >> n >> s;
    for(int i = 0;i < s.size();i++){
        if(s[i]!='x') continue;
        int j = i, len;
        while(j+1 < n && s[j+1]==s[j]) j++;
        len = j - i + 1;
        if(len>=3) ans+=len-2;
        i = j;
    }
    cout << ans << endl;
}
