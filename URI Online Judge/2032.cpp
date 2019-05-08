#include <bits/stdc++.h>
using namespace std;
int a, b, koorX, koorY;

bool issolvable(vector<vector<int> > vec){
    int count = 0, arr[15];
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++) arr[i*3+j] = vec[i][j];
    for(int i=0;i<8; i++)
        for(int j=i+1;j<9;j++) if(arr[j] && arr[i] && arr[i] > arr[j]) count++;
    return (count%2 == 0);
}

bool isvalid(int a, int b){
    if(a<0 || b<0 || a==3 || a==3) return false;
    return true;
}

void printv(vector<vector<int>> vc){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++) cout<<vc[i][j];
        cout<<endl;
    }
}

typedef struct{
    int x, y, step;
    string trace;
}board;

int main(){
    char gr[3][3];
    while ( cin >>gr[0][0]>>gr[0][1]>>gr[0][2]
                >>gr[1][0]>>gr[1][1]>>gr[1][2]
                >>gr[2][0]>>gr[2][1]>>gr[2][2]){
        queue<pair <vector<vector<int> >, board> > state;
        vector<vector<int>> input, goal;
        set<vector<vector<int>> > visited;
        for(int i=0;i<3;i++){
            vector<int>temp, tempinput;
            for(int j=0;j<3;j++){
                temp.push_back((i*3+j+1)%9);
                tempinput.push_back(gr[i][j]-'0');
                if(gr[i][j]-'0' == 0){ a=i; b=j;}
            }
            goal.push_back(temp);
            input.push_back(tempinput);
        }
        koorY=a;
        koorX=b;
        board cur; cur.step=0; cur.x=b; cur.y=a; cur.trace="";
        state.push(make_pair(input, cur));
        if(!state.empty() && !issolvable(state.front().first)) state.pop();
        if(state.empty()) cout<<"Problema sem solucao"<<endl;
        else{
            while(!state.empty() && state.front().first != goal ){
                vector<vector<int> > vc, tempvc;
                vc = state.front().first;
                cur = state.front().second;
                a=cur.y;
                b=cur.x;
                board papan;
                if(visited.count(vc)==0){
                    visited.insert(vc);
                    tempvc=vc;
                    papan.step = cur.step+1;
                    if(isvalid(a-1, b)){
                        swap(tempvc[a][b], tempvc[a-1][b]);
                        papan.y = a-1;
                        papan.x = b;
                        papan.trace=cur.trace+"U";
                        state.push(make_pair(tempvc, papan));
                    }
                    tempvc=vc;
                    if(isvalid(a+1, b)){
                        swap(tempvc[a][b], tempvc[a+1][b]);
                        papan.y = a+1;
                        papan.x = b;
                        papan.trace=cur.trace+"D";
                        state.push(make_pair(tempvc, papan));
                    }
                    tempvc=vc;
                    if(isvalid(a, b+1)){
                        swap(tempvc[a][b], tempvc[a][b+1]);
                        papan.y = a;
                        papan.x = b+1;
                        papan.trace=cur.trace+"R";
                        state.push(make_pair(tempvc, papan));
                    }
                    tempvc=vc;
                    if(isvalid(a, b-1)){
                        swap(tempvc[a][b], tempvc[a][b-1]);
                        papan.y = a;
                        papan.x = b-1;
                        papan.trace=cur.trace+"L";
                        state.push(make_pair(tempvc, papan));
                    }
                }
                state.pop();
            }
            if(!state.empty()){
                cout<<"Quantidade minima de passos = "<<state.front().second.step<<endl;
                string ans = state.front().second.trace;
                for(int i=0;i<ans.length();i++){
                    if(ans[i]=='U'){ swap(input[koorY-1][koorX], input[koorY][koorX]); koorY--;}
                    else if(ans[i]=='D'){ swap(input[koorY+1][koorX], input[koorY][koorX]); koorY++;}
                    else if(ans[i]=='R'){ swap(input[koorY][koorX+1], input[koorY][koorX]); koorX++;}
                    else {swap(input[koorY][koorX-1], input[koorY][koorX]); koorX--;}
                    printv(input);
                    if(i!=ans.length()-1) cout<<endl;
                }
            }
        }
    }
    return 0;
}
