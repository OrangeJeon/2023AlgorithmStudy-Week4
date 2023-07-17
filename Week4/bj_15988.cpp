#include<iostream>
using namespace std;

long long dp[1000001];

void add_123(int n)
{
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	for (int i = 4; i <= n; i++)
	{
		dp[i] = (dp[i - 3] + dp[i - 2] + dp[i - 1])%1000000009;
	}
	
}
//n과 관련된 수들을 모두 long long 형으로 바꿔도 상관없지만 해당 코드가 더 시간이 단축된다.
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