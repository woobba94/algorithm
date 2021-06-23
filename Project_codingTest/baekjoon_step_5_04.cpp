//#include <iostream>
//using namespace std;
//
//
//int getAverage(int* (&arr), int size);
//int getMedian(int* (&arr), int size);
//int getMaxFrequency(int* (&arr), int size, int count[], int maxVal);
//int getRange(int* (&arr), int size);
//void quickSort(int* (&arr), int start, int end);
//
//int main()
//{
//	int count[8001] = { 0, };
//	int maxVal = 0;
//	int n = 0;
//	cin >> n;
//
//	int* arr = new int[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//		count[arr[i] + 4000]++;
//		if (maxVal < count[arr[i] + 4000]) maxVal = count[arr[i] + 4000];
//	}
//
//	quickSort(arr, 0, n - 1);
//
//	cout << "산술평균 : " << getAverage(arr, n) << endl;
//	cout << "중앙값 : " << getMedian(arr, n) << endl;
//	cout << "최빈값 : " << getMaxFrequency(arr, n, count, maxVal) << endl;
//	cout << "범위 : " << getRange(arr, n) << endl;
//}
//
//// 산술평균
//int getAverage(int* (&arr), int size)
//{
//	double result = 0;
//	for (int i = 0; i < size; i++)
//	{
//		result += arr[i];
//		//cout << "arr[" << i << "] = " << arr[i] << endl;
//	}
//	//cout << "나누기전 result 총합 = " << result << endl;
//	result = round(result / (double)size); // 반올림 round()
//	//cout << size <<"로 나눈 후 result 평균  = " << result << endl;
//
//	return result;
//}
//
//// 중앙값
//int getMedian(int* (&arr), int size)
//{
//	int result = 0;
//	result = arr[size / 2];
//
//	return result;
//}
//
//// 최빈값
//int getMaxFrequency(int* (&arr), int size, int count[], int maxVal)
//{
//	int isSecond = false;
//	int result = 0;
//	for (int i = 0; i < 8001; i++)
//	{
//		if (maxVal == count[i])
//		{
//			result = i - 4000;
//			/*cout << "결과 보자:" << endl;
//			cout << result << endl;
//			cout << "끝---" << endl;*/
//			if (isSecond) break;
//			isSecond = true;
//		}
//	}
//	return result;
//}
//
//// 범위
//int getRange(int* (&arr), int size)
//{
//	int result = 0;
//	result = abs(arr[size - 1] - arr[0]);
//
//	return result;
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