//#include <iostream>
//
//using namespace std;
//
//void setData(long long data[]);
//int main()
//{	
//	long long data[91] = { 0, }; // 입력값 범위 90 이하
//	setData(data);
//
//	int n;
//	cin >> n;
//
//	cout << data[n];
//}
//
//void setData(long long data[])
//{
//	data[1] = 1;
//
//	for (int i = 2; i < 91; i++)
//	{
//		data[i] = data[i - 1] + data[i - 2];
//	}
//}