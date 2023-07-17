#include<iostream>
using namespace std;

int dp[12];

int add_123(int n)
{
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	for (int i = 4; i <= n; i++)
	{
		dp[i] = dp[i - 3] + dp[i - 2] + dp[i - 1];
	}
	if (dp[n] != 0) return dp[n];
	
	
}

int main()
{
	int T, n;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> n;
		add_123(n);
		printf("%d\n", dp[n]);
	}
}