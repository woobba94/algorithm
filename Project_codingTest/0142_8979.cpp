//#include <iostream>
//using namespace std;
//
//class Country
//{
//public:
//	int num;
//	int rank;
//	int gold;
//	int silver;
//	int bronze;
//
//	void swap(Country &a, Country &b)
//	{
//		Country temp = a;
//		a = b;
//		b = temp;
//	}
//};
//
//int main()
//{
//	// 국가 수 (1 ≤ N ≤ 1,000)
//	int n = 0;
//	cin >> n;
//	Country* arr = new Country[n];
//
//	// 등수 알고 싶은 국가 num
//	int target;
//	cin >> target;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i].num >> arr[i].gold >> arr[i].silver >> arr[i].bronze;
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n - 1; j++)
//		{
//			// 금메달 검사
//			if (arr[j].gold < arr[j + 1].gold)
//			{
//				swap(arr[j], arr[j + 1]);
//			}
//			// 금메달 동일
//			else if (arr[j].gold == arr[j + 1].gold)
//			{
//				// 은메달 검사
//				if (arr[j].silver < arr[j + 1].silver)
//				{
//					swap(arr[j], arr[j + 1]);
//				}
//				// 은메달 동일
//				else if (arr[j].silver == arr[j + 1].silver)
//				{
//					// 동메달 검사
//					if (arr[j].bronze < arr[j + 1].bronze)
//					{
//						swap(arr[j], arr[j + 1]);
//					}
//				}
//			}
//		}
//	}
//	// 1등 먼저 선언
//	arr[0].rank = 1;
//
//	for (int i = 0; i < n - 1; i++)
//	{
//		// 모든 메달이 같으면
//		if (arr[i].gold == arr[i + 1].gold &&
//			arr[i].silver == arr[i + 1].silver &&
//			arr[i].bronze == arr[i + 1].bronze)
//		{
//			arr[i + 1].rank = arr[i].rank;
//		}
//		else
//		{
//			arr[i + 1].rank = i + 2;
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i].num == target)
//		{
//			cout << arr[i].rank;
//			break;
//		}
//	}
//
//}
//
