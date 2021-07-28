//#include <iostream>
//using namespace std;
//
//class Player
//{
//public:
//	int num[3];
//	int score = 0;
//};
//
//int main()
//{
//	int n;
//	cin >> n;
//	Player* arr = new Player[n];
//	for(int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cin >> arr[i].num[j];
//		}
//	}
//
//	bool flag = true;
//
//	for (int j = 0; j < 3; j++)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int k = 0; k < n; k++)
//			{
//				if (i != k)
//				{
//					if (arr[i].num[j] == arr[k].num[j])
//					{
//						flag = false;
//						break;
//					}
//				}
//			}
//			if (flag == true)
//			{
//				arr[i].score += arr[i].num[j];
//			}
//			flag = true;
//			
//		}
//	}
//	
//		
//
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr[i].score << endl;
//	}
//}