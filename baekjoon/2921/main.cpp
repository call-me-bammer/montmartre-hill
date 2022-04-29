#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	
	int* dp = new int[n + 1]();
	
	for (int i = 1; i <= n; i++) {
		dp[i] = dp[i-1] + (i * (i+1) / 2) + i * (i+1);
	}
	
	cout << dp[n] << endl;
	
	delete dp;
	
	return 0;
}
