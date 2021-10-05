#include <bits/stdc++.h>
using namespace std;
const int HOUR = 24, MINSEC = 60;
int main()
{
	int N, K;
	cin >> N >> K;
	int count = 0;
	
	int hourCount = 0;

	for (int i = 0; i < N; i++)
	{
		if (i < 10)
			if (i == K) hourCount++;
		else
			if (i % 10 == K || i / 10 == K) hourCount++;
	}

	// 포함되는 minute * 60개
	if (K <= 5) 
		count += hourCount * 3600 + (15 * 60 + (15 * 45)) * (N - hourCount);
	else
	{
		if(K == 0)
		count += (6 * 60 + (6 * 45)) * (N - hourCount);
	}

	
	cout << hourCount << endl;
	cout << count;
}