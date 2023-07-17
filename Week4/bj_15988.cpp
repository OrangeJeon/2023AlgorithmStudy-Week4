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
//n�� ���õ� ������ ��� long long ������ �ٲ㵵 ��������� �ش� �ڵ尡 �� �ð��� ����ȴ�.
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