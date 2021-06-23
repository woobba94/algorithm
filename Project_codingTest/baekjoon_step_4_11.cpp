#include <iostream>
using namespace std;

bool isPrime(int num);
void findPartition(int num);
int main()
{
	int T;
	int arr[100];
	
	cout << "케이스 갯수 : ";
	cin >> T;

	cout << "2보다 큰 짝수 입력 : " << endl;

	for (int i = 0; i < T; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < T; i++)
	{
		findPartition(arr[i]);
	}
}

bool isPrime(int num) // 소수 판별
{
	if (num == 1) return false;

	for (int i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0) return false;
	}
	return true;
}

void findPartition(int num) // 파티션 계산&출력
{
	int result[3] = {0,};//i값, j값, 차이값 저장

	for (int i = 1; i < num; i++)
	{
		for (int j = num - 1; j > 0; j--)
		{
			if (isPrime(i) == true && isPrime(j) == true)
			{
				if (i + j == num) {
					if (result[0] == 0) //첫 실행
					{
						result[0] = i;
						result[1] = j;
						result[2] = abs(i - j);
					}
					else if (result[2] > abs(i - j))
					{
						result[0] = i;
						result[1] = j;
						result[2] = abs(i - j);
					}
					else continue;
				}
			}
		}
	}
	cout << result[0] << " " << result[1] << endl;
}
