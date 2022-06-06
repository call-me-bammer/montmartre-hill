#include <iostream>
using namespace std;

#define INF 1e9

typedef long long ll;

ll g[101][101];

int main() {
	
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int n, m;
	cin >> n >> m;
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			
			if (i == j)
				g[i][j] = 0;
			else
				g[i][j] = INF;
			
		}
	}
	
	ll a, b, c;
	
	for (int i = 0; i < m; i++) {
		cin >> a >> b >> c;
		
		g[a][b] = min(g[a][b], c);
	}
	
	// do Floyd-Warshall
	for (int i = 1; i <= n; i++) {
		
		for (int j = 1; j <= n; j++) {
			
			//if (i == j)
			//	continue;
			
			for (int z = 1; z <= n; z++) {
				
				//if ((z == i) || (z == j))
				//	continue;
					
				g[j][z] = min(g[j][z], g[j][i] + g[i][z]);
			}
		}
	}
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			
			if (g[i][j] == INF)
				cout << 0 << ' ';
			else
				cout << g[i][j] << ' ';
		}
		cout << '\n';
	}
	
	return 0;
}
