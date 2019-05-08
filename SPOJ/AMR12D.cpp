#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
        string s;
        cin>>s;
        string temp=s;
        reverse(temp.begin(), temp.end());
        if(temp==s) puts("YES");
        else puts("NO");
    }
}
