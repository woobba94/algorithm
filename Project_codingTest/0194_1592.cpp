//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n, m, l;
//	cin >> n >> m >> l;
//
//	int* arr = new int[n]();
//	int count = -1;
//	int index = 0;
//	while (1)
//	{
//		// 공받음
//		arr[index]++;
//		count++;
//		if (arr[index] < m)
//		{
//			// 받은 횟수가 짝수일 때
//			if (arr[index] % 2 == 0)
//			{
//				// 반대 l 번째로
//				index -= l;
//				if (index < 0)
//				{
//					index += n;
//				}
//			}
//			else
//			{
//				index += l;
//				if (n - 1 < index)
//				{
//					index -= n;
//				}
//			}
//		}
//		else
//		{
//			cout << count;
//			break;
//		}
//	}
//}