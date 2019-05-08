#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
int n, m, d;
vector<pair<double, int> > node[20002];

double dijkstra(int from, int to){
    vector<double> dist(n+2, INT_MAX);
    priority_queue<pair<double, int>, vector<pair<double, int> >, greater<pair<double, int> > > pq;
    dist[from] = 0.0;
    pq.push(mp(0.0, from));
    while(!pq.empty()){
        pair<double, int> curr = pq.top();
        pq.pop();
        double ftemp = curr.first;
        int stemp = curr.second;
        if(stemp == to) return dist[to];
        for(int i = 0;i < node[stemp].size();i++){
            double cost = node[stemp][i].first;
            int next = node[stemp][i].second;
            if(cost + ftemp < dist[next]){
                dist[next] = cost + ftemp;
                pq.push(mp(dist[next], next));
            }
        }
    }
    return -1;
}

int main(){
    while(scanf("%d%d%d", &n, &m, &d) == 3){
        memset(node, 0.0, sizeof(node));
        while(m--){
            int a, b; double w;
            scanf("%d%d%lf", &a, &b, &w);
            double seri = 1.0 / w;
            node[a].push_back(mp((double)seri, b));
            node[b].push_back(mp((double)seri, a));
        }
        double result = dijkstra(0, n-1);
        double ans = (double) d / result;
        if(ans < 0.0) ans = 0.0;
        printf("%.2lf\n", ans);
    }
}
