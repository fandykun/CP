#include <bits/stdc++.h>
using namespace std;
vector<int> primes;
int bil[1000];

bool isPrime(int n){
    for(int j=0;primes[j]<=sqrt(n) && j<primes.size(); j++) if(n%primes[j]==0) return false;
    return true;
}

int main(){
    primes.push_back(2);
    for(int i=3;i<=1010;i+=2){
        if(isPrime(i)) primes.push_back(i);
    }
    int t;
    bool cek;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(isPrime(n)) cout<< n-2 << endl;
        else {
            int faktor=0, rumah=0;
            for(int i=2 ; i<=n/2 ; i++){
                if(isPrime(i) && (n%i == 0)){
                    bil[faktor]=i;
                    faktor++;
                }
            }
            for(int i=2; i<n; i++){
                cek = true;
                for(int j=0; j<faktor; j++){
                    if(i%bil[j]==0){
                        cek = false;
                        j=faktor;
                    }
                }
                if(cek) rumah++;
            }
            cout<<rumah<<endl;
        }
    }
    return 0;
}
