//#include <iostream>
//using namespace std;
//
//
//int getMax(int a, int b);
//int main()
//{
//	int n;
//	cin >> n;
//
//	char adrian[100] = {};
//	char bruno[100] = {};
//	char goran[100] = {};
//	int k = 0;
//	for (int i = 0; i < 100; i++)
//	{
//		if (k == 0)
//			adrian[i] = 'A';
//		if (k == 1)
//			adrian[i] = 'B';
//		if (k == 2)
//		{
//			adrian[i] = 'C';
//			k = -1;
//		}
//		k++;
//	}
//	k = 0;
//	for (int i = 0; i < 100; i++)
//	{
//		if (k == 0 || k == 2)
//			bruno[i] = 'B';
//		if (k == 1)
//			bruno[i] = 'A';
//		if (k == 3)
//		{
//			bruno[i] = 'C';
//			k = -1;
//		}
//		k++;
//	}
//	k = 0;
//	for (int i = 0; i < 100; i++)
//	{
//		if (k == 0 || k == 1)
//			goran[i] = 'C';
//		if (k == 2 || k == 3)
//			goran[i] = 'A';
//		if (k == 4)
//			goran[i] = 'B';
//		if (k == 5)
//		{
//			goran[i] = 'B';
//			k = -1;
//		}
//		k++;
//	}
//
//	char* arr = new char[n];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//
//	int adrianCount = 0, brunoCount = 0, goranCount = 0;
//
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] == adrian[i])
//			adrianCount++;
//		if (arr[i] == bruno[i])
//			brunoCount++;
//		if (arr[i] == goran[i])
//			goranCount++;
//	}
//	int maxCount = getMax(getMax(adrianCount, brunoCount), goranCount);
//		
//	cout << maxCount << endl;
//	if(maxCount == adrianCount)
//		cout << "Adrian" << endl;
//	if (maxCount == brunoCount)
//		cout << "Bruno" << endl;
//	if (maxCount == goranCount)
//		cout << "Goran" << endl;
//}
//
//int getMax(int a, int b)
//{
//	if (a < b)
//		return b;
//	return a;
//}