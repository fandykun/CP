#include <stdio.h>
#include <string.h>

int main(){
    char s[101];
    scanf("%s", &s);
    int arr[101];
    for(int i=0, j=0;i<strlen(s);i+=2, j++){
        arr[j]=s[i]-'0';
    }
    int n=(strlen(s)+1)/2;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    int i=0, j=0;
    while(i<strlen(s)){
        if(i%2==0) printf("%d", arr[j]);
        else{
            printf("+");
            j++;
        }
        i++;
    }
}
