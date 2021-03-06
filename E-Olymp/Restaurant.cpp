#include <bits/stdc++.h>
using namespace std;
#define start first
#define finish second

typedef pair<int, int> pii;

struct hall{
    int maxevent = 0, last = 0;
};

bool hallcompare(hall a, hall b){
    return a.maxevent > b.maxevent;
}

vector<pii> input;
vector<vector<pii> > event;

int main(){
    int n, k;
    cin>>n>>k;
    for(int i = 0;i < k;i++){
        int a, b, c, d;
        pii tmp;
        scanf("%d:%d-%d:%d", &a, &b, &c, &d);
        tmp.start = a*60 + b; tmp.finish = c*60 + d + 30;
        input.push_back(tmp);
    }
    sort(input.begin(), input.end());
    vector<hall> vc;
    for(int i = 0;i < k;i++){
        bool flag = 0;
        for(int j = 0;j < vc.size();j++){
            if(input[i].start >= vc[j].last){
                vc[j].last = input[i].finish;
                vc[j].maxevent++;
                flag = 1;
                break;
            }
        }
        if(!flag){
            hall temp;
            temp.maxevent++;
            temp.last = input[i].finish;
            vc.push_back(temp);
        }
        sort(vc.begin(), vc.end(), hallcompare);
    }
    int p = 0, q = 0;
    for(int i = 0;i < vc.size();i++){
        q++;
        p+=vc[i].maxevent;
        if(q == n) break;
    }
    cout << p << " " << q << endl;
    return 0;
}
                                                                                                                         