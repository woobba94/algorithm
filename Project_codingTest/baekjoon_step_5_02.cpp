//#include <iostream>
//using namespace std;
//
//void quickSort(int* (&arr), int start, int end);
//int main()
//{
//	int n;
//	cin >> n;
//	int* arr = new int[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	quickSort(arr, 0, n - 1);
//
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr[i] << endl;
//	}
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
//	cout << "pivot : " << pivot << endl;
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