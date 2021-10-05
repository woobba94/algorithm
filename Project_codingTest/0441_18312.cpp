#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, K;
	cin >> N >> K;
	
	int count = 0;

	for (int i = 0; i < N; i++)
	{
		string time;

		if (i < 10) time += "0";
		time += i + '0';

		for (int j = 0; j < 60; j++)
		{
			if (j < 10) time += "0";
			time += j + '0';

			for (int k = 0; k < 60; k++)
			{
				if (k < 10) time += "0";
				time += k + '0';
			}
		}
		
		for (int j = 0; j < 6; j++)
		{
			if (time[i] == K + '0') count++;
		}
	}

	cout << count;
}