#include<bits/stdc++.h>
#define N 200005
using namespace std;
vector<int> V[N];
int n, m, x, d[N];
void input1(){        //void --> procedure
	for(int i = 2; i <= n; i++){
		cin >> x;
		V[i].push_back(x);
		V[x].push_back(i);
		// i - iig  x, x - iig i - tai holboh
	}	
}
int gogo(int u, int p){
	int res = 0;
	if(d[u] != -1) return d[u];
	for(int i = 0; i < V[u].size(); i++){
	int v = V[u][i];
	if(p != v) res += gogo(v, u);		
	}
	res++;
	
	return d[u] = res;
}
int main () {
	cin >> n;
	input1();
	memset(d, -1, sizeof(d));
    // procedure
    int k;
	k = gogo(1, -1);
	for(int i = 1; i <= n; i++) cout << d[i] - 1 << " ";
}