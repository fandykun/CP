#include <cstdio>
#include <vector>
#include <cmath>
using namespace std;
vector<int>vi;

int main(){
    int n, tmp;
    int curr_tab, prev_tab=0, ans=0;
    scanf("%d", &n);
    for (int i=0; i<n; i++){ scanf("%d", &tmp); vi.push_back(tmp);}
    for (int i=0; i<n; i++){
        scanf("%d", &tmp);
        vi[i]=tmp-vi[i];
    }
    while(!vi.empty()){
        prev_tab=0; curr_tab=vi.back();
        if(curr_tab>0){
            ans=ans+curr_tab-prev_tab;
            vi.pop_back(); prev_tab=curr_tab;
            while(!vi.empty()){
                curr_tab=vi.back();
                if(curr_tab<0) break;
                vi.pop_back();
                if(prev_tab<curr_tab) ans=ans+curr_tab-prev_tab;
                prev_tab=curr_tab;
            }
        } else{
            curr_tab=abs(curr_tab);
            ans=ans+curr_tab-prev_tab;
            vi.pop_back(); prev_tab=curr_tab;
            while(!vi.empty()){
                curr_tab=vi.back();
                if(curr_tab>0) break;
                vi.pop_back();
                curr_tab=abs(curr_tab);
                if(prev_tab<curr_tab) ans=ans+curr_tab-prev_tab;
                prev_tab=curr_tab;
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}
