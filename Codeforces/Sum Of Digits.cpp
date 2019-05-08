#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin>>s;
    int sum, temp, ans=0;
    while(s.size()>1){
        sum=0;
        for(int i=0;i<s.size();i++){
            sum+=(s[i]-'0');
        }
        s=to_string(sum);
        ans++;
    }
    cout<<ans<<endl;
}
