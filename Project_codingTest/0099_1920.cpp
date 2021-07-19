//#include <iostream>
//using namespace std;
//
//int n = 0; //(1 ≤ N ≤ 100,000)
//int binarySearch(int* arr, int num);
//void quickSort(int* (&arr), int start, int end);
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0); //cin 속도 향상 위해
//
//	cin >> n;
//	int* arrN = new int[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arrN[i];
//	}
//	quickSort(arrN, 0, n - 1);
//
//	int m = 0; //(1 ≤ N ≤ 100,000)
//	cin >> m;
//	int* arrM = new int[m];
//
//	for (int i = 0; i < m; i++)
//	{
//		cin >> arrM[i];
//	}
//
//	for (int i = 0; i < m; i++)
//	{
//		cout << binarySearch(arrN, arrM[i]) << "\n";
//	}
//
//}
//
//int binarySearch(int* arr, int target)
//{
//	int start = 0;
//	int end = n - 1;
//	int mid;
//
//	while (start <= end)
//	{
//		mid = (end + start) / 2;
//
//		if (arr[mid] == target) return 1;
//		else if (target < arr[mid])
//		{
//			end = mid - 1;
//		}
//		else
//		{
//			start = mid + 1;
//		}
//	}
//	return 0;
//}
//
//// 퀵 정렬(오름차순)
//void quickSort(int* (&arr), int start, int end)
//{
//	if (start >= end)
//	{
//		return;
//	}
//	int temp;
//	int pivot = arr[(start+end)/2]; // 기준점(중간)
//	int left = start; // 왼쪽 출발지점
//	int right = end; // 오른쪽 출발지점
//
//	while (left <= right)
//	{
//		while (arr[left] < pivot) left++; // 왼쪽에 기준점 보다 큰수가 없으면 계속 ++
//		while (arr[right] > pivot) right--;
//
//		// left는 왼쪽에서 기준점보다 큰 수를 찾음.
//		// right는 오른쪽에서 기준점보다 작은 수를 찾음.
//
//		if (left <= right) // 정상적일때
//		{
//			// 왼쪽의 큰수와 오른쪽의 작은수를 교환
//			temp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = temp;
//			left++;
//			right--;
//		}
//	}
//	quickSort(arr, start, right); // 왼쪽 부분 다시 퀵정렬
//	quickSort(arr, left, end); // 오른쪽 부분 다시 퀵정렬
//}