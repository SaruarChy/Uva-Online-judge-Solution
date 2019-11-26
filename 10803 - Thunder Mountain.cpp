#include <bits/stdc++.h>
#define N 105
#define INF 1000000

using namespace std;

int u[N], v[N], n;
double graph[N][N];

double Distance(int i, int j) {
    return sqrt((u[i]-u[j])*(u[i]-u[j]) + (v[i]-v[j])*(v[i]-v[j]));
}

int main()
{

    int kase, kk, i, j, k;
    cin >> kase;
    for (kk=1; kk<=kase; kk++) {
        cin >> n;
        for (i=1; i<=n; i++)
            cin >> u[i] >> v[i];
        for (i=1; i<=n; i++)
            for (j=i; j<=n; j++) {
                graph[i][j] = Distance(i, j);
                if (graph[i][j]>10) graph[i][j] = INF;
                graph[j][i] = graph[i][j];
            }

        for (k=1; k<=n; k++)
            for (i=1; i<=n; i++)
                for (j=1; j<=n; j++)
                    graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);

        double ans = 0.0;
        for (i=1; i<=n; i++)
            for (j=i; j<=n; j++) {
                ans = max(ans, graph[i][j]);
        }
        printf("Case #%d:\n", kk);
        if (ans==INF)
            puts("Send Kurdy");
        else
            printf("%.4lf\n", ans);
        cout << endl;
    }
}
