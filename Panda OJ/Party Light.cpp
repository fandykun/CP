#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int lamp[8][6]={ 0,0,0,0,0,0,
                 0,0,1,1,1,0,
                 0,1,0,1,0,1,
                 0,1,1,0,1,1,
                 1,0,0,1,0,0,
                 1,0,1,0,1,0,
                 1,1,0,0,0,1,
                 1,1,1,1,1,1 };
int n_lamp, n_press, n_onlamps, n_offlamps;
int on_lamp[1001], off_lamp[1001];
bool lamp_stats[11], cond;

int main(){
    int cid=0, t;
    scanf("%d", &t);
    while(t--){
            memset(lamp_stats,1,sizeof(lamp_stats));
            scanf("%d %d", &n_lamp, &n_press);
            scanf("%d", &n_onlamps);
            for(int i=0; i<n_onlamps;i++){
                scanf("%d", &on_lamp[i]);
                on_lamp[i]--;
            }
            scanf("%d", &n_offlamps);
            for(int i=0; i<n_offlamps;i++){
                scanf("%d", &off_lamp[i]);
                off_lamp[i]--;
            }
        if(n_lamp==1){
            lamp_stats[1]=0; lamp_stats[2]=0;
            lamp_stats[3]=0; lamp_stats[4]=0;
            lamp_stats[6]=0; lamp_stats[7]=0;
        }else if(n_lamp==2){
            lamp_stats[1]=0; lamp_stats[3]=0;
            lamp_stats[4]=0; lamp_stats[7]=0;
        }
        if(n_press==1){
            lamp_stats[1]=0; lamp_stats[4]=0;
            lamp_stats[6]=0; lamp_stats[7]=0;
        }else if(n_press==2)
            lamp_stats[3]=0;

        printf("Kasus %d:\n", ++cid);
        for(int i=0; i<8; i++){
            if(lamp_stats[i]){
                cond = true;
                for(int j=0; j<n_onlamps; j++){
                    if(lamp[i][on_lamp[j]%6]==0){
                    cond=false;
                    break;
                    }
                }
                if(cond)
                for(int j=0; j<n_offlamps; j++){
                    if(lamp[i][off_lamp[j]%6]==1){
                        cond=false;
                        break;
                    }
                }
                if(cond){
                    for(int j=0; j<n_lamp;j++){
                        printf("%d", lamp[i][j%6]);
                    }
                    printf("\n");
                }
            }
        }
    }
    return 0;
}
