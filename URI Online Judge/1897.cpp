#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    queue<pair <int, int> > op;
    set<int>num;
    op.push(make_pair(n, 0));
    while(!op.empty() && op.front().first!=m){
        int number=op.front().first;
        int step=op.front().second;
        if(num.count(number)==0){
            num.insert(number);
            op.push(make_pair(number*2, step+1));
            op.push(make_pair(number*3, step+1));
            op.push(make_pair(number/2, step+1));
            op.push(make_pair(number/3, step+1));
            op.push(make_pair(number+7, step+1));
            op.push(make_pair(number-7, step+1));
        }
        op.pop();
    }
    cout<<op.front().second<<endl;
}
