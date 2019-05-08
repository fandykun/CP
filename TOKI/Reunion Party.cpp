#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, tc, ans, arr[142];
    for(int i=0;i<141;i++) arr[i]=(i+1)*(i+2) / 2;
    scanf("%d", &tc);
    while(tc--){
        scanf("%d", &n);
        for(int i=0;i<141;i++){
            if(arr[i]>n){ printf("%d\n", i+1);break;}
        }
    }
    return 0;
}
