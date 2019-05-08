#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define debug(x) cout<<x<<endl

typedef struct{
    int X, Y;
    double F;
}lazy;

lazy IntoStruct(int a, int b, double f, double dist){
    lazy tmp;
    tmp.X = a, tmp.Y = b, tmp.F = f, tmp.jarak = dist;
    return tmp;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, ax, ay, bx, by;
    while(cin >> n >> ax >> ay >> bx >> by && n!=-1){
        queue<lazy> qw;
        vector<pair<pair<int, int>, double> > vc;
        vector<double> visit;
        vc.push_back(mp(mp(bx, by), 0.0));
        for(int i = 0;i < n;i++){
            int cx, cy; double f;
            cin>>cx>>cy>>f;
            vc.push_back(mp(mp(cx, cy), f));
            visit.push_back(0.0);
        }
        lazy temp = IntoStruct(ax, ay, 0.0, 0.0);
        qw.push(temp);
        double x, y, cat, dist1, dist2, ans=0.0;
        bool flag=1;
        while(!qw.empty()){
            ax = qw.front().X, ay = qw.front().Y;
            cat = qw.front().F, dist1 = qw.front().jarak;
            if( (ax == bx && ay == by) && (ans > dist1 || ans == 0) ) ans = dist1;
            qw.pop();
            for(int i=0;i<vc.size();i++){
                x = vc[i].first.first, y = vc[i].first.second;
                dist2 = sqrt( (x-ax)*(x-ax) + (y-ay)*(y-ay) );
                if( visit[i] > dist1 + abs(dist2-cat) || visit[i] == 0 ){
                    visit[i] = dist1 + abs(dist2-cat);
                    temp = IntoStruct(x, y, vc[i].second, dist1 + abs(dist2-cat));
                    qw.push(temp);
                }
            }
            if(cat == 0 && dist1 == 0) vc.pop_back();
        }
        cout<<fixed<<setprecision(2)<<ans<<endl;
    }
    return 0;
}
