#include<iostream>
using namespace std;

int N, T, dp[100001][2];

int main()
{
	cin >> T;
	dp[1][1] = dp[2][1] = dp[2][0] = dp[0][0] = 1;

	for (int i = 3; i <= 100000; i++)
	{
		dp[i][0] = ((dp[i - 1][1] + dp[i - 2][1]) % 1000000009 + dp[i - 3][1]) % 1000000009;
		dp[i][1] = ((dp[i - 1][0] + dp[i - 2][0]) % 1000000009 + dp[i - 3][0]) % 1000000009;
	}
	while (T--)
	{
		cin >> N;
		cout << dp[N][1] << ' ' << dp[N][0] << '\n';
	}
}