//#include <iostream>
//using namespace std;
//
//int n = 0; // 도시 개수
//
//int getMinCity(int* price, int start, int end);
//long long getSumPrice(int* price, int* distance, int start, int end);
//int main()
//{
//	cin >> n;
//
//	// 각 도시 기름값
//	int* price = new int[n];
//
//	// 도시 사이 거리
//	int* distance = new int[n - 1];
//
//	// 거리 입력
//	for (int i = 0; i < n - 1; i++)
//	{
//		cin >> distance[i];
//	}
//
//	// 기름값 입력
//	for (int i = 0; i < n; i++)
//	{
//		cin >> price[i];
//	}
//	// 총 비용
//	long long result = 0;
//	int minCity = 0;
//	int end = n;
//
//	// 남은 거리 수
//	int count = n - 1;
//
//	while (0 < count)
//	{
//		minCity = getMinCity(price, 0, end);
//
//		count = end - minCity;
//
//		result += getSumPrice(price, distance, minCity, end);
//
//		end = minCity;
//	}
//
//	cout << result;
//
//}
//
//// start 에서 기름 채울 때 end 까지 비용 리턴
//long long getSumPrice(int* price, int* distance, int start, int end)
//{
//	long long sumDistance = 0;
//	long long sumPrice = 0;
//	if (end - start == 1)
//	{
//		sumPrice = distance[start] * price[start];
//		return sumPrice;
//	}
//
//	for (int i = start; i < end - 1; i++)
//	{
//		sumDistance += distance[i];
//	}
//
//	sumPrice = sumDistance * price[start];
//
//	return sumPrice;
//}
//
//
//// start 에서 end 까지 중 제일 싼 도시 리턴
//int getMinCity(int* price, int start, int end)
//{
//	int minPrice = 1000000000; // 최대 10억
//	int minCity = 0;
//	for (int i = start; i < end - 1; i++)
//	{
//		if (minPrice > price[i])
//		{
//			minPrice = price[i];
//			minCity = i;
//		}
//	}
//
//	return minCity;
//}