//#include <iostream>
//#include <vector>
//using namespace std;
//
//bool isDivided(vector <int> lengthVec, long long length, int n);
//int binarySearch(vector <int> lengthVec, int target, int min, int max, int n);
//int main()
//{
//	int k = 0, n = 0, result = 1;
//	vector <int> lengthVec(n);
//
//	cin >> k >> n;
//
//	while (k--)
//	{
//		int x = 0;
//		cin >> x;
//		lengthVec.push_back(x);
//	}
//
//	cout << binarySearch(lengthVec, result, 0, 10000000000, n);
//
//
//}
//
//bool isDivided(vector <int> lengthVec, long long length, int n)
//{
//	int count = 0; // 랜선 총 갯수
//	for (int i = 0; i < lengthVec.size(); i++)
//	{
//		count += lengthVec[i] / length; // 나눈 갯수 합산
//	}
//
//	if (count < n) //불가능
//	{
//		return false;
//	}
//	else return true;
//}
//
//int binarySearch(vector <int> lengthVec, int target, int min, int max, int n)
//{
//	while (min <= max)
//	{
//		int mid = (min + max) / 2; // mid 갱신
//		if (isDivided(lengthVec, mid, n)) // 중간값이 target이면
//		{
//			if (target < mid)
//			{
//				target = mid;
//			}
//			min = mid + 1;
//		}
//		else
//		{
//			max = mid - 1;
//		}
//	}
//	return target;
//}