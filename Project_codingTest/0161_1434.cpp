//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//
//	int boxVolume[50] = {};
//	int bookVolume[50] = {};
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> boxVolume[i];
//	}
//
//	for (int i = 0; i < m; i++)
//	{
//		cin >> bookVolume[i];
//	}
//
//	int boxIndex = 0;
//	int result = 0; // 낭비되는 공간
//	for (int i = 0; i < m; i++)
//	{
//		// 책이 박스에 안들어가면
//		if (bookVolume[i] > boxVolume[boxIndex])
//		{
//			boxIndex++;
//			i--;
//		}
//		// 책이 박스에 들어가면
//		else
//		{
//			// 잉여 공간++
//			// result += (boxVolume[boxIndex] - bookVolume[i]);
//			boxVolume[boxIndex] -= bookVolume[i];
//		}
//
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		result += boxVolume[i];
//	}
//
//
//	cout << result;
//
//}
