//#include <iostream>
//
//using namespace std;
//
//void sort(int* (&scoreArr), int capacity);
//int getResult(int* scoreArr, int capacity);
//int main()
//{
//	int capacity = 0;
//	
//	cin >> capacity;
//
//	int* scoreArr = new int[capacity];
//
//	for(int i = 0; i < capacity; i++)
//	{
//		int input = 0;
//		cin >> input;
//		scoreArr[i] = input;
//	}
//	sort(scoreArr, capacity);
//
//	cout << getResult(scoreArr, capacity);
//
//	return 0;
//}
//
//int getResult(int* scoreArr, int capacity)
//{
//	return (scoreArr[capacity - 1] - scoreArr[0]);
//}
//
//void sort(int* (&scoreArr), int capacity)
//{
//	int temp = 0;
//
//	for (int i = 0; i < capacity; i++)
//	{
//		for (int j = 0; j < capacity - 1; j++)
//		{
//			if (scoreArr[j] > scoreArr[j + 1])
//			{
//				temp = scoreArr[j];
//				scoreArr[j] = scoreArr[j + 1];
//				scoreArr[j + 1] = temp;
//			}
//		}
//	}
//}