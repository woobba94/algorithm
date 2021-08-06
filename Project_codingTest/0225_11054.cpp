#include <iostream>
using namespace std;

int dp[1001] = {};

int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	bool isUp = true;
	int index = 0;
	dp[index]++;
	for (int i = 1; i < n; i++)
	{
		if (isUp == false)
		{
			// 계속 내려가면
			if (arr[i - 1] > arr[i])
			{
				dp[index]++;
			}
			// 위로 꺾이면
			else
			{
				isUp = true;
				index++;
				dp[index]++;
				dp[index]++;
			}
				
		}
		else
		{
			// 계속 올라가면
			if (arr[i - 1] < arr[i])
			{
				dp[index]++;
			}
			// 올라가다가 내려가면
			else
			{
				isUp = false;
				dp[index]++;
			}
		}
	}

	int max = 0;
	for (int i = 0; i < index + 1; i++)
	{
		if (max < dp[i])
			max = dp[i];
	}
	cout << max;
}

//dp[1] = 1;
//dp[2] = 2;
//
//if (arr[0] > arr[1] && arr[1] < arr[2])
//{
//	dp[3] = 2;
//}