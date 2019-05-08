#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[15];
    int maks=-1, ind;
    for(int i=0;i<14;i++) {
        scanf("%d", &arr[i]);
        if(maks<arr[i] && !arr[i]%2){
            maks=arr[i];
            ind = i;
        }
    }
    for(int i=ind;i<14+ind;i++){

    }

}
