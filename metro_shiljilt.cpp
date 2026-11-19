#include<bits/stdc++.h>
using namespace std;

int main () {
    int n, m, p, a, b;
    int sta[21][101] = {0};

    cin >> n >> m;

    for(int i = 1; i <= m; i++){
        cin >> p;

        for(int j = 1; j <= p; j++){
            int x;
            cin >> x;
            sta[i][x] = 1;
        }
    }

    cin >> a >> b;

    queue<int> q;
    int dist[21];

    for(int i = 1; i <= m; i++){
        dist[i] = -1;
    }

    for(int i = 1; i <= m; i++){
        if(sta[i][a] == 1){
            q.push(i);
            dist[i] = 0;
        }
    }

    while(q.size() > 0){
        int u = q.front();
        q.pop();

        if(sta[u][b] == 1){
            cout << dist[u];
            return 0;
        }

        for(int v = 1; v <= m; v++){
            if(dist[v] != -1){
                continue;
            }

            bool connected = false;
            for(int x = 1; x <= n; x++){
                if(sta[u][x] == 1 && sta[v][x] == 1){
                    connected = true;
                    break;
                }
            }

            if(connected){
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }

    cout << -1;
    return 0;
}
