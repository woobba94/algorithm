//#include <iostream>
//using namespace std;
//
//bool dataArr[1001] = {};
//void setData(bool data[]);
//bool checkNum(int num);
//int main()
//{
//	int n = 0; // 0 <= n <= 1,000
//	cin >> n;
//	setData(dataArr);
//	int count = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (dataArr[i] == true) count++;
//	}
//
//	cout << count;
//}
//
//void setData(bool data[])
//{
//	data[1000] = false;
//	for (int i = 1; i < 1000; i++)
//	{
//		if (i < 100) data[i] = true;
//		else if (checkNum(i) == true)
//		{
//			data[i] = true;
//		}
//	}
//}
//
//bool checkNum(int num)
//{
//	int arr[3] = {}; // 1000의 자리까지 4자리 수
//
//	for(int i = 0; i < 3; i++)
//	{
//		if (num == 0) break;
//
//		arr[i] = num % 10; // 1
//
//		num /= 10;
//	}
//	
//	if (arr[0] - arr[1] != arr[i] - arr[i + 1]) return false;
//	
//	return true;
//}