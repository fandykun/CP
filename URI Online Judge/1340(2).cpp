#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    while(cin>>n){
        bool stc=true, que=true, pque=true;
        stack<int> st;
        queue<int> qw;
        priority_queue<int> pqw;
        int a, b;
        for(int i=0;i<n;i++){
            cin>>a>>b;
            if(a==1){
                st.push(b);
                qw.push(b);
                pqw.push(b);
            }
            else if(a==2){
                if(!st.empty() && st.top()==b) st.pop();
                else stc=false;
                if(!qw.empty() && qw.front()==b) qw.pop();
                else que=false;
                if(!pqw.empty() && pqw.top()==b) pqw.pop();
                else pque=false;
            }
        }
        if( (stc && pque) || (que&&pque)) cout<<"not sure"<<endl;
        else if(stc) cout<<"stack"<<endl;
        else if(pque) cout<<"priority queue"<<endl;
        else if(que) cout<<"queue"<<endl;
        else cout<<"impossible"<<endl;
    }
    return 0;
}
