#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)

bool compare(pair<int, int> a, pair<int, int> b){
    if(a.second != b.second) return a.second < b.second;
    return a.first < b.first;
}

vector<pair<int, int> > vc;

int main(){
    fastio;
    int t;
    cin >> t;
    while(t--){
        vc.clear();
        int i, n, finish;
        cin >> n;
        for(int i = 0;i < n;i++){
            pair<int, int> tmp;
            cin >> tmp.first >> tmp.second;
            vc.push_back(tmp);
        }
        sort(vc.begin(), vc.end(), compare);
        queue<int> activity;
        for(i = 0, finish = 0;i < n;i++){
            if(vc[i].first >= finish) {
                activity.push(i);
                finish = vc[i].second;
            }
        }
        cout << activity.size() << endl;
    }
}
