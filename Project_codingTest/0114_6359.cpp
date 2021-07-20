//#include <iostream>
//using namespace std;
//
//int main()
//{
//	// 열려있으면 true
//	bool* isUnlocked;
//	int roomCount = 0;
//
//	int caseCount = 0;
//	cin >> caseCount;
//
//	while (caseCount--)
//	{
//		cin >> roomCount;
//		isUnlocked = new bool[roomCount + 1] {};
//
//		// i 번 반복
//		for (int i = 1; i < roomCount + 1; i++)
//		{
//			// i 배수방 트리거
//			for (int j = i; j < roomCount + 1; j += i)
//			{
//				// 잠겨있으면 열고 열려있으면 잠금
//				if (isUnlocked[j] == false)
//					isUnlocked[j] = true;
//				else
//					isUnlocked[j] = false;
//			}
//		}
//		int count = 0;
//		for (int i = 1; i < roomCount + 1; i++)
//		{
//			// 열려있으면 count++
//			if (isUnlocked[i] == true) count++;
//		}
//		cout << count << endl;
//	}
//}