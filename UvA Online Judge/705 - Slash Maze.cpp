#include <bits/stdc++.h>
using namespace std;
int w, h, flag, maks;
int maps[255][255];
bool visit[255][255];
int cnt=0, ans=0;

void dfs(int a, int b){
    if(a==3*h || b==3*w || a<0 || b<0){ flag=0; return;}
    if(visit[a][b] || maps[a][b])return;
    visit[a][b] = true;
    cnt++;
    dfs(a-1, b); dfs(a, b-1); dfs(a+1, b); dfs(a, b+1);
}

int main(){
    int k=0;
    while(cin>>w>>h && w!=0 && h!=0){
        memset(maps, 0, sizeof(maps));
        memset(visit, false, sizeof(visit));
        char ch;
        for(int i=0; i<h*3; i+=3){
            for(int j=0; j<w*3; j+=3){
                cin>>ch;
                if(ch=='\\') maps[i][j]=maps[i+1][j+1]=maps[i+2][j+2]=1;
                else maps[i+2][j]=maps[i+1][j+1]=maps[i][j+2]=1;
            }
        }
        maks=0, ans=0;
        for(int i=0;i<h*3;i++)
            for(int j=0;j<w*3;j++)
                if(maps[i][j] == 0 && !visit[i][j]){
                    flag = 1;
                    cnt = 0;
                    dfs(i, j);
                    if(flag){
                        ans++;
                        if(maks<cnt) maks = cnt;
                    }
                }
        cout<<"Maze #"<<++k<<":"<<endl;
        if(!ans) cout<<"There are no cycles."<<endl;
        else cout<<ans<<" Cycles; the longest has length "<<maks/3<<"."<<endl;
        cout<<endl;
    }
    return 0;
}
