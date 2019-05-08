#include <bits/stdc++.h>
using namespace std;

int arr[1002] { };
bool cek[1002] { };

int main(){
    int n;
    scanf("%d", &n);
    stack<int>st;
    for(int i = 0;i < n;i++) scanf("%d", &arr[i]);
    for(int i = n-1;i >= 0;i--){
        if(!cek[arr[i]]){
            cek[arr[i]] = 1;
            st.push(arr[i]);
        }
    }
    cout << st.size() << endl;
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}
