#include <iostream>
using namespace std;

bool isFinish(int* arr, int n);
void swiching(int* arr, int n, int k);
int main()
{
	int n;
	cin >> n;

	char* arr = new char[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];

	}
	int count = 0;
	while (1)
	{
		if (isFinish)
		{
			cout << count;
			break;
		}
		
		for (int i = 1; i < n - 1; i++)
		{
			swiching(arr, n, i);
		}
	}
}
void swiching(char* arr, int n, int k)
{
	int index = k;
	int d = 1;
	while (1)
	{
		index *= d;
		if (index > n)
			break;

		if (arr[index] == 'Y')
			arr[index] = 'N';
		else
			arr[index] = 'Y';
		d++;
	}
}

bool isFinish(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == 'Y')
			return false;
	}
	return true;
}