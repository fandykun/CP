#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)

int main(){
    fastio;
    int n;
    cin >> n;
    double ans = (log(n-1)/log(3)) + 1;
    cout << (int)ans << endl;
    return 0;
}
