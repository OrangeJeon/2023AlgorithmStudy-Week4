#include<iostream>
using namespace std;

int T, N, M, dp[1001][1001];

int main()
{
	dp[1][1] = dp[2][1] = dp[2][2] = dp[3][1] = dp[3][3] = 1;
	dp[3][2] = 2;

	for (int i = 4; i <= 1000; i++)
	{
		for (int j = 1; j <= 1000; j++)
		{
			dp[i][j] = ((dp[i - 1][j - 1] + dp[i - 2][j - 1]) % 1000000009 + dp[i - 3][j - 1]) % 1000000009;
		}
		
	}
	cin >> T;
	while (T--)
	{
		cin >> N >> M;
		cout << dp[N][M] << "\n";
	}
	return 0;
}