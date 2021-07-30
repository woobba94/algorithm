//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	// 바구니의 범위 설정
//	int left = 1;
//	int right = m;
//
//	int j;
//	cin >> j;
//
//	int dropPoint;
//	int distance = 0;
//	while(j--)
//	{
//		cin >> dropPoint;
//		if (right < dropPoint)
//		{
//			while (1)
//			{
//				if (right == dropPoint) break;
//				right++;
//				left++;
//				distance++;
//			}
//			
//		}
//		else if(dropPoint < left)
//		{
//			while (1)
//			{
//				if (left == dropPoint) break;
//				right--;
//				left--;
//				distance++;
//			}
//		}
//	}
//
//	cout << distance;
//}