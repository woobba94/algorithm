//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	bool* isRetire = new bool[n]{};
//
//	for(int i = 0; i < n; i++)
//	{
//		int flag = true;
//		// 답안 임시 저장 배열
//		int arr[11] = {};
//		for (int j = 1; j <= 10; j++)
//		{
//			int answer = ((j - 1) % 5) + 1;
//			cin >> arr[j];
//			// 한문제라도 틀리면 편법 x
//			if (arr[j] != answer)
//			{
//				flag = false;
//			}
//		}
//		// 만점이면 편법 -> 재시험
//		if (flag == true)
//		{
//			isRetire[i] = true;
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		if (isRetire[i] == true)
//			cout << i + 1 << endl;
//	}
//}