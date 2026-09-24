#include <bits/stdc++.h>
#define N 200000
using namespace std;
long long n, l, r, m, a[3000000], c, d, f, tree[4*N];
void build(int id, int L, int R){
	if(L == R){
		tree[id] = a[L];
		return ;
	}
    build(2 * id, L, (L + R) / 2);
    build(2 * id + 1, (L+ R) / 2 + 1, R);
    
    tree[id] = min(tree[2 * id], tree[2 * id + 1]);
    
}
int query(int id, int L,int R, int l, int r){
	if (r < L || R < l) return 1e18;
	
	if (l <= L && R <= r) return tree[id];
	int x = query(2 * id, L, (L + R) / 2, l, r);
	int y = query(2 * id + 1, (L + R) / 2 + 1, R, l, r);
	
	return min(x, y);
}
int main(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	
	build(1, 1, n);

	for(int i = 1; i <= m; i++){
		cin >> l >> r;
		
		cout << query(1, 1, n, l, r)<<"\n";
	}
}