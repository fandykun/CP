#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define debug(x) cout<<x<<endl

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, ax, ay, bx, by;
    while(cin>>n>>ax>>ay>>bx>>by && n!=-1&&ax!=-1&&ay!=-1&&bx!=-1&&by!=-1){
        queue<pair<pair<int, int>, double> > pq;
        vector<pair<int, int> > vc;
        vector<double> visit, vcf;
        vc.push_back(mp(bx, by));
        vcf.push_back(0.0);
        visit.push_back(1000000000.0);
        for(int i=0;i<n;i++){
            int cx, cy; double f;
            cin>>cx>>cy>>f;
            vc.push_back(mp(cx, cy));
            vcf.push_back(f);
            visit.push_back(1000000000.0);
        }
        pq.push(mp(mp(ax, ay), 0.0));
        double x, y, f, dist, jarak, ans=0.0;
        while(!pq.empty()){
            ax = pq.front().first.first*1.0;
            ay = pq.front().first.second*1.0;
            jarak = pq.front().second;
            if( (ax==bx && ay==by) && (ans > jarak || ans==0) ) ans=jarak;
            for(int i=0;i<vc.size();i++){
                x = vc[i].first*1.0, y = vc[i].second*1.0, f = vcf[i];
                dist = sqrt((x-ax)*(x-ax)+(y-ay)*(y-ay));
                if( visit[i] > jarak+abs((dist-f)) ){
                    pq.push(mp(mp(vc[i].first, vc[i].second), jarak+abs((dist-f))));
                    visit[i] = jarak+abs((dist-f));
                }
            }
            pq.pop();
        }
        cout<<fixed<<setprecision(2)<<ans<<endl;
    }
    return 0;
}
