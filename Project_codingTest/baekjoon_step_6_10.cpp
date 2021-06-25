#include <iostream>
#include <vector>
using namespace std;


int sigmaCal(int x);
void fnc(vector <int>(&couple));

int main()
{
	int caseCount = 0;
	cin >> caseCount;
	vector <vector<int>> couple(caseCount);

	for (int i = 0; i < caseCount; i++)
	{
		cin >> couple[i][0] >> couple[i][1];
	}
	
}

void fnc(vector <vector<int>> (&couple))
{
	for (int i = 0; i < couple.size(); i++)
	{
		// n이 한개일때
		if (couple[i][0] == 1)
		{
			cout << couple[i][1]; // 경우의 수 m개
		}
		// n이 두개
		else if (couple[i][0] == 2)
		{
			sigmaCal(couple[i][1] - 1);
		}
		else // n은 3이상
		{

		}
	}
	
}


int sum(int x)
{
	int result = 0;
	for (int i = 1; i <= x; i++)
	{
		result += sigmaCal(i);
	}
	return result;
}

// 시그마 연산 함수
int sigmaCal(int x)
{
	int result = 0;
	for (int i = x; i > 0; i--)
	{
		result += i;
	}

	return result;
}