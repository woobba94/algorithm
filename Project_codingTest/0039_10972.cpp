#include <iostream>
using namespace std;

bool calc(int* (&arr), int size);
void swap(int& a, int& b);

int main()
{
	// 1 ≤ N ≤ 10,000
	int n = 0;

	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	if (calc(arr, n) == false)
	{
		cout << -1;
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
	}
}

bool calc(int* (&arr), int size)
{
	// 뒤에서 부터 검사
	for (int i = size - 1; 0 < i; i--)
	{
		if (arr[i - 1] < arr[i])
		{
			for (int j = size - 1; i - 1 < j; j--)
			{
				if (arr[i - 1] < arr[j])
				{
					swap(arr[i - 1], arr[j]);
					for (int k = i; k < size; k++)
					{
						for(int l = i; l < size - 1; l++)
						{
							if (arr[l] > arr[l + 1])
							{
								swap(arr[l], arr[l + 1]);
								
							}
						}
					}
					return true;
				}
			}
		}
	}
	return false;
}

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}