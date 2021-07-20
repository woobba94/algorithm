//#include <iostream>
//using namespace std;
//
//int main()
//{
//	// 손님의 수
//	int n;
//	cin >> n;
//
//	int num; // 앉고싶은 자리
//
//	
//	bool arr[101] = {}; // 100 개의 자리 == false 이면 빈자리
//						// 1번부터 100번
//
//	// 거절 수
//	int count = 0;
//	while (n--)
//	{
//		// 희망하는 자리 입력
//		cin >> num;
// 
//		// 자리가 비어있으면 채우기
//		if (arr[num] == false)
//		{
//			arr[num] = true;
//		}
//		// 거절
//		else 
//		{
//			count++;
//		}
//	}
//
//	cout << count;
//}