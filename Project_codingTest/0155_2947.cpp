//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int arr[5] = {};
//	for (int i = 0; i < 5; i++)
//	{
//		cin >> arr[i];
//	}
//	
//
//	while (1)
//	{
//		bool isClear = true;
//		for (int i = 0; i < 4; i++)
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				isClear = false;
//				int temp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = temp;
//
//				for (int i = 0; i < 5; i++)
//				{
//					cout << arr[i] << " ";
//					if (i == 4) cout << endl;
//				}
//			}
//		}
//
//		if (isClear == true) break;
//	}
//}