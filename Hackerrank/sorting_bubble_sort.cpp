#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0;i < n; i++)
        scanf("%d", &arr[i]);
    
    int count = 0;
    for(int i = 0;i < n - 1; i++) {
        for(int j = 0;j < n - i - 1; j++)
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                count++;
            }
    }

    printf("Array is sorted in %d swaps.\n", count);
    printf("First Element: %d\n", arr[0]);
    printf("Last Element: %d\n", arr[n-1]);

}