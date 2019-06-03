#include <cstdio>
#include <vector>
#include <queue>
using namespace std;

int N, E;
int s, d, a, b;
double c;

int getInt()
{
    register int c = getchar_unlocked();
    int x;
    x = 0;
    int neg = 0;

    for (; ((c < 48 || c > 57) && c != '-'); c = getchar_unlocked())
        ;

    if (c == '-')
    {
        neg = 1;
        c = getchar_unlocked();
    }

    for (; c > 47 && c < 58; c = getchar_unlocked())
    {
        x = (x << 1) + (x << 3) + c - 48;
    }

    if (neg)
        x = -x;
    return x;
}

inline double getDouble() {
    char ch;
    bool seen = false;
    bool sign = false;
    char values[10];
    double result =0.;
    bool beforeDot = true;
    int beforeLength = 0;
    double multiplier;

    while((ch = getc(stdin)) != EOF) {
        if(ch == '-') {
            sign = true;
            continue;
        }
        if(ch == ' ' || ch == '\n') {
            if(seen) break;
            continue;
        }
        if(ch == '.') {
            beforeDot = false;
            multiplier = 1.;
            while(beforeLength) {
                result += (double)(values[--beforeLength] - '0') * multiplier;
                multiplier *= 10.;
            }
            multiplier = 10.;
        }
        else {
            if(!beforeDot)
            {
                result += double(ch - '0') / multiplier;
                multiplier *= 10.;
            } else {
                values[beforeLength++] = ch;
            }
            seen = true;
        }
    }
    if(beforeDot) {
        multiplier = 1;
        while(beforeLength) {
            result += (double)(values[--beforeLength] - '0') * multiplier;
            multiplier *= 10.;
        }
    }

    if(sign) result *= -1.;

    return result;
}

int main()
{
    N = getInt(); E = getInt();
    s = getInt(); d = getInt();

    priority_queue<pair<double, int>> pq;
    vector<pair<int, double>> path[N + 1];
    double mrpath[N + 1];

    for (int i = 1; i <= N; i++)
        mrpath[i] = -1.0;

    for (int i = 1; i <= E; i++)
    {
        a = getInt(); b = getInt();
        c = getDouble();
        path[a].push_back(make_pair(b, c));
    }

    pq.push(make_pair(1.0, s));
    while (!pq.empty())
    {
        double w = pq.top().first;
        int cur = pq.top().second;
        pq.pop();
        for (int i = 0; i < path[cur].size(); i++)
        {
            pair<int, double> next = path[cur][i];
            double reliable = w * next.second;

            if (mrpath[next.first] >= reliable)
                continue;
            mrpath[next.first] = reliable;
            pq.push(make_pair(reliable, next.first));
        }
    }

    printf("%.6lf\n", mrpath[d]);
    return 0;
}
