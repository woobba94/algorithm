//#include <iostream>
//
//using namespace std;
//
//int calc(int num);
//int main()
//{
//	bool isExist = false;
//	int num;
//	cin >> num;
//
//	// 최소 생성자 : 1부터 증가하며 탐색
//	for (int i = 1; i < num; i++)
//	{
//		if (num == (i + calc(i)))
//		{
//			cout << i;
//			isExist = true;
//			break;
//		}
//	}
//	if (isExist == false) cout << 0;
//}
//
//// 각 자리수의 합 반환
//int calc(int num)
//{
//	int result = 0;
//
//	while (num)
//	{
//		result += num % 10;
//		num /= 10;
//	}
//
//	return result;
//}