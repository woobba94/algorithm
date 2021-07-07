//#include <iostream>
//using namespace std;
//
//void expulsionOverlap(int** (&arr), int x1, int x2, int size);
//int getLength(int** line, int n);
//void sort(int** (&arr), int count);
//int max(int a, int b);
//int main()
//{
//	int n;
//	cin >> n;
//
//	int** line = new int* [n];
//
//	// 초기화 (start, end 값 하나씩 저장 할 것 => 크기 2)
//	for (int i = 0; i < n; i++)
//	{
//		line[i] = new int[2];
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		int x1, x2;
//		cin >> x1 >> x2;
//		// 첫 입력
//		if (i == 0)
//		{
//			line[i][0] = x1;
//			line[i][1] = x2;
//		}
//		else
//		{
//			expulsionOverlap(line, x1, x2, i);
//		}
//	}
//
//	sort(line, n);
//
//	
//	cout << getLength(line, n) << endl;
//
//	return 0;
//}
//
//int getLength(int** line, int n)
//{
//	// 초기값 설정
//	int sum = 0;
//	int start = line[0][0];
//	int	end = line[0][1];
//
//	for (int i = 1; i < n; ++i)
//	{
//		// (다음 시작점 < 현재 종료점) -> 합침 -> 종료점 갱신
//		if (line[i][0] <= end)
//		{
//			end = max(end, line[i][1]);
//		}
//		else
//		{
//			sum += end - start;
//			start = line[i][0];
//			end = line[i][1];
//		}
//	}
//	sum += end - start;
//
//	return sum;
//}
//
//void expulsionOverlap(int** (&line), int x1, int x2, int i)
//{
//	// overlap all
//	if (line[i][0] <= x1 && x2 <= line[i][1])
//	{
//		// 입력 x
//	}
//	else
//	{
//		line[i][0] = x1;
//		line[i][1] = x2;
//	}
//}
//
//
//void sort(int** (&arr), int count)
//{
//	int temp = 0;
//	for (int i = 0; i < count; i++)
//	{
//		for (int j = 0; j < count - 1; j++)
//		{
//			if (arr[j][0] > arr[j + 1][0])
//			{
//				temp = arr[j][0];
//				arr[j][0] = arr[j + 1][0];
//				arr[j + 1][0] = temp;
//			}
//		}
//	}
//}
//
//int max(int a, int b)
//{
//	return a > b ? a : b;
//}