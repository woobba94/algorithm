//#include <iostream>
//
//using namespace std;
//int calcMinCount(int start, int end);
//int main()
//{
//	int caseCount, start, end;
//
//	cin >> caseCount;
//
//	while (caseCount--)
//	{
//		cin >> start >> end;
//		cout << calcMinCount(start, end) << endl;
//	}
//}
//
//int calcMinCount(int start, int end)
//{
//	// 1번 이동한 상태로 초기화
//	int count = 1;
//	int distance = 1;
//	while (distance < end - start)
//	{
//		// k + 1 광년 이동가능
//		if ((distance + distance + 1) < end - start)
//		{
//			distance += (distance + 1);
//			count++;
//		}
//		// k 광년 이동가능
//		else if ((distance + distance) < end - start)
//		{
//			distance += distance;
//			count++;
//		}
//		// k - 1 광년 이동가능
//		else if ((distance + distance - 1) < end - start)
//		{
//			distance += (distance - 1);
//			count++;
//		}
//		// 불가능 -> 1광년만 이동
//		else
//		{
//			distance += 1;
//			count++;
//		}
//	}
//	return count;
//}