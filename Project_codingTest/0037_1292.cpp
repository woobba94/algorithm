//#include <iostream>
//using namespace std;
//
//int getResult(int* arr, int start, int end);
//void setArr(int* (&arr), int size);
//int main()
//{
//	int start, end;
//	cin >> start >> end;
//
//	int size = end + 1;
//	int* arr = new int[size];
//
//	setArr(arr, size);
//
//	cout << getResult(arr, start, end) << endl;
//}
//
//int getResult(int* arr, int start, int end)
//{
//	int sum = 0;
//	for (int i = start; i <= end; i++)
//	{
//		sum += arr[i];
//	}
//	return sum;
//}
//
//void setArr(int* (&arr), int size)
//{
//	int pointer = 1;
//	for (int i = 1; i < size; i++)
//	{
//		for (int j = 1; j <= i; j++) // i ¹ø »ðÀÔ
//		{
//			if (pointer == size) break;
//			arr[pointer] = i;
//			pointer++;
//		}
//	}
//}