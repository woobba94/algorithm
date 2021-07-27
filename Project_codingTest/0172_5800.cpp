//#include <iostream>
//using namespace std;
//
//int k, n;
//class Class
//{
//public:
//	int size = n;
//	int* score = new int[n];
//	int largestGap = 0;
//
//	void printMax()
//	{
//		cout << "Max " << score[0] << ", ";
//	}
//
//	void printMin()
//	{
//		cout << "Min " << score[n - 1] << ", ";
//	}
//
//	void printGap()
//	{
//		for (int i = 0; i < n - 1; i++)
//		{
//			if (score[i] - score[i + 1] > largestGap)
//				largestGap = score[i] - score[i + 1];
//		}
//		cout << "Largest gap " << largestGap << endl;
//	}
//
//	void sort()
//	{
//		int temp;
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n - 1; j++)
//			{
//				if (score[j] < score[j + 1])
//				{
//					temp = score[j];
//					score[j] = score[j + 1];
//					score[j + 1] = temp;
//				}
//			}
//		}
//	}
//};
//
//int main()
//{
//	cin >> k;
//	Class* arr = new Class[k];
//
//	for (int i = 0; i < k; i++)
//	{
//		cin >> n;
//		for (int j = 0; j < n; j++)
//		{
//			cin >> arr[i].score[j];
//		}
//		arr[i].sort();
//		cout << "Class " << i + 1 << endl;
//
//		arr[i].printMax();
//		arr[i].printMin();
//		arr[i].printGap();
//	}
//}