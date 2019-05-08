#include <cstdio>
#include <stack>
using namespace std;
stack<int> car;

int main(){
    int n;
    while(scanf("%d", &n) && n!=0){
        int cnt=0;
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }
        for(int i=0;i<n;i++){
            while(car.size() && car.top() == cnt+1) { cnt++; car.pop();}
            if(arr[i] == cnt+1) cnt++;
            else car.push(arr[i]);
        }
        while(car.size() && car.top() == cnt+1){cnt++; car.pop();}
        if(cnt==n) puts("yes");
        else puts("no");
    }
    return 0;
}
