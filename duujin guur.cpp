#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> p(n), r(n), l(n), d(n);
    for(int i = 1; i < n-1; i++) cin >> p[i];  
    for(int i = 0; i < n-1; i++) cin >> r[i];
    for(int i = 0; i < n-1; i++) cin >> l[i];   
    for(int i = 0; i < n-1; i++) cin >> d[i];   
    vector<vector<double>> v(n-1, vector<double>(m));
    for(int i = 0; i < n-1; i++)
        for(int j = 0; j < m; j++)
            cin >> v[i][j];  
    vector<double> arrive(m, 0.0);  
    for(int i = 0; i < n-1; i++) { 
        double last_pos_time = 0.0;
        for(int j = 0; j < m; j++) {
            double speed = v[i][j];
            double time_to_cross = l[i] / speed;
            if(j >= r[i]) {  
                last_pos_time = max(last_pos_time, arrive[j - r[i]]);
            }
            if(j >= 1)
                last_pos_time = max(last_pos_time, arrive[j-1] + d[i]/speed);  // ????????? ???
            arrive[j] = last_pos_time + time_to_cross;
        }
    }
    double total_time = *max_element(arrive.begin(), arrive.end());
    cout << fixed << setprecision(6) << total_time << "\n";
    return 0;
}
