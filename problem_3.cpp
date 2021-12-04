#include<iostream>
#define ll long long

using namespace std;

ll dp[6][15];

ll f(int i, int j) {
	if (i > j) return 0;
	if (dp[i][j] == -1) {
		dp[i][j] = f(i - 1, j - 1) + i * f(i, j - 1);
	}
	return dp[i][j];
}

int main() {
	for (int i = 2; i < 6; ++i) {
		for (int j = 1; j < 15; ++j) {
			dp[i][j] = -1;
		}
	}
	for (int i = 0; i < 6; ++i) {
		dp[i][0] = 0;
	}
	for (int j = 0; j < 15; ++j) {
		dp[0][j] = 0;
	}
	for (int j = 1; j < 15; ++j) {
		dp[1][j] = 1;
	}
	cout << f(5, 14) << endl;
}