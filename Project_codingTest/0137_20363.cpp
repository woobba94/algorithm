#include <iostream>
using namespace std;

int main()
{
	int result = 0;

	int needWarm, needMoisture;
	cin >> needWarm >> needMoisture;
	
	// 현재 온기와 수분
	int nowWarm = 0;
	int nowMoisture = 0;

	int flag = false;
	while (1)
	{
		if (needWarm == 0 && needMoisture == 0) break;

		// 온기 꽉 채움
		result += needWarm;
		nowWarm += needWarm;

		// 처음이면
		if (flag == false)
		{
			flag = true;
		}
		else
		{
			nowMoisture -= needWarm / 10;
			needMoisture += needWarm / 10;
		}
		needWarm = 0;
		
		// 수분 꽉 채움
		result += needMoisture;
		nowMoisture += needMoisture;

		nowWarm -= needMoisture / 10;
		needWarm += needMoisture / 10;

		needMoisture = 0;

	}

	cout << result;

}
