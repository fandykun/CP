#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
const int maxn = 2e5+5;

vector<int> vc1(maxn), vc2(maxn);
vector<vector<int>> quarrel(maxn);

int main(){
    fastio;
    int n, k;
    cin >> n >> k;
    for(int i = 0;i < n;i++){
        cin >> vc1[i];
        vc2[i] = vc1[i];
    }
    sort(vc2.begin(), vc2.begin()+n);
    for(int i = 0;i < k;i++){
        int a, b;
        cin >> a >> b;
        quarrel[a-1].push_back(b-1);
        quarrel[b-1].push_back(a-1);
    }
    for(int i = 0;i < n;i++){
        int ans = lower_bound(vc2.begin(), vc2.begin()+n, vc1[i])-vc2.begin();
        for(int j = 0;j < quarrel[i].size();j++){
            if(vc1[quarrel[i][j]] < vc1[i]) ans--;
        }
        cout << ans << " ";
    }
    cout << endl;
}
