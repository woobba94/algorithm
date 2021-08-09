//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int t;
//	cin >> t;
//
//	int y, x;
//	while (t--)
//	{
//		cin >> y >> x;
//
//		bool** arr = new bool* [y]();
//
//		for (int i = 0; i < y; i++)
//		{
//			arr[i] = new bool[x]();
//		}
//
//		for (int i = 0; i < y; i++)
//		{
//			for (int j = 0; j < x; j++)
//			{
//				cin >> arr[i][j];
//			}
//		}
//
//		int count = 0;
//		
//		while (1)
//		{
//			bool isFinish = true;
//			
//			for (int i = 0; i < y - 1; i++)
//			{
//				for (int j = 0; j < x; j++)
//				{
//					if (arr[i][j] == true && arr[i + 1][j] == false)
//					{
//						arr[i][j] = false;
//						arr[i + 1][j] = true;
//						count++;
//						isFinish = false;
//					}
//				}
//			}
//			if (isFinish == true)
//				break;
//		}
//
//		cout << count << endl;
//		
//	}
//}