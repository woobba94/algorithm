//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int t;
//	cin >> t;
//	
//	while (t--)
//	{
//		char inputA[101] = {};
//		char inputB[101] = {};
//		int equalCount = 0;
//		cin >> inputA;
//		cin >> inputB;
//
//		for (int i = 0; i < 100; i++)
//		{
//			if (inputA[i] == '\0') break;
//			if (inputA[i] != inputB[i])
//				equalCount++;
//		}
//
//		cout << "Hamming distance is " << equalCount << "." << endl;
//	}
//}