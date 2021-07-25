//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n, p; // 1 ¡Â N ¡Â 1,000, 2 ¡Â P ¡Â 97
//
//	cin >> n >> p;
//
//	int cycle = n;
//	int arr[1000] = {};
//	int size = 0;
//	bool isFirst = true;
//	bool isFinish = false;
//	int targetIndex = 0;
//	int index = 0;
//	while (isFinish == false)
//	{
//		cycle = (cycle * n) % p;
//
//		if (isFirst == true)
//		{
//			arr[index] = cycle;
//			index++;
//			size++;
//			isFirst = false;
//		}
//		else
//		{
//			for (int i = 0; i < size; i++)
//			{
//				if (arr[i] == cycle)
//				{
//					isFinish = true;
//					targetIndex = i;
//					break;
//				}
//			}
//			if (isFinish == false)
//			{
//				arr[index] = cycle;
//				index++;
//				size++;
//			}
//		}
//		
//	}
//
//	cout << size - targetIndex;
//}