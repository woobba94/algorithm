//#include <iostream>
//using namespace std;
//
//void sort(int* (&arr), int size);
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//
//	int* customer = new int[m];
//
//	for (int i = 0; i < m; i++)
//	{
//		cin >> customer[i];
//	}
//
//	int price = 1;
//	int max = 0;
//	int sum = 0;
//
//	sort(customer, m);
//
//	// 최소 판매 개수
//	int k = 1;
//
//	while (1)
//	{
//		sum = 0;
//		if (k > n) break;
//
//		for (int i = 0; i < k; i++)
//		{
//			sum += customer[k - 1];
//		}
//
//		if (max < sum)
//		{
//			max = sum;
//			price = customer[k - 1];
//		}
//
//		k++;
//	}
//
//	cout << price << " " << max;
//	
//}
//
//void sort(int* (&arr), int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size-1; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}