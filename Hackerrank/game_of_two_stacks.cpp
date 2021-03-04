#include <bits/stdc++.h>

using namespace std;

int main()
{
    int g, n, m, x;
    cin >> g;

    while(g--) {
        cin >> n >> m >> x;
        int A[100001], B[100001];

        for(int i = 0;i < n; i++)
            cin >> A[i];
        for(int i = 0;i < m; i++)
            cin >> B[i];

        int ai = 0, bi = 0, sum = 0, ans = 0;

        // menghitung seberapa banyak di stack A
        while(ai < n && sum+A[ai] <= x) {
            sum += A[ai];
            ai++;
        }
        ans = ai;

        // menghitung seberapa banyak yang mampu
        // di stack B sembari mengurangi porsi dari stack A
        while(bi < m && ai >= 0) {
            sum += B[bi];
            bi++;
            while(sum > x && ai > 0) {
                sum -=A[--ai];
            }
            if(sum <= x && ai+bi > ans)
                ans = ai+bi;
        }

        cout << ans << endl;
    }
}