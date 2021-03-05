#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n1, n2, n3, height;
    cin >> n1 >> n2 >> n3;

    queue<int> queue1, queue2, queue3;
    int sum1 = 0, sum2 = 0, sum3 = 0;

    for(int i = 0;i < n1; i++) {
        cin >> height;
        queue1.push(height);
        sum1 += height;
    }
    
    for(int i = 0;i < n2; i++) {
        cin >> height;
        queue2.push(height);
        sum2 += height;
    }

    for(int i = 0;i < n3; i++) {
        cin >> height;
        queue3.push(height);
        sum3 += height;
    }
    int answer = 0;
    while(!queue1.empty() || !queue2.empty() || !queue3.empty()) {
        if(sum1 == sum2 && sum2 == sum3) {
            answer = sum1;
            break;
        }
        
        // Jika q1 paling kecil
        else if(sum1 <= sum2 && sum1 <= sum3) {
            if(sum2 > sum3) {
                sum2 -= queue2.front();
                queue2.pop();
            } else {
                sum3 -= queue3.front();
                queue3.pop();
            }
        }

        // Jika q2 paling kecil
        else if(sum2 <= sum1 && sum2 <= sum3) {
            if(sum1 > sum3) {
                sum1 -= queue1.front();
                queue1.pop();
            } else {
                sum3 -= queue3.front();
                queue3.pop();
            }
        }

        // Jika q3 paling kecil
        else if(sum3 <= sum1 && sum3 <= sum2) {
            if(sum1 > sum2) {
                sum1 -= queue1.front();
                queue1.pop();
            } else {
                sum2 -= queue2.front();
                queue2.pop();
            }
        }
    }

    cout << answer << endl;
}
