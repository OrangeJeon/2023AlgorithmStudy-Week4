#include<iostream>
using namespace std;

int dp[1001][1001];

int main()
{
	int N, K;
	cin >> N >> K;

	for (int i = 0; i <= N; i++)
	{
		for (int j = 0; j <= K; j++)
		{
			if (j == 0) dp[i][0] = 1;
			else if (j == i) dp[i][j] = 1;
			else
				dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % 10007;
		}
	}

	cout << dp[N][K];
}