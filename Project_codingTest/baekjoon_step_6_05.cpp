//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//
//int measureCheck(vector <int> measure);
//void sort(vector <int>(&measure));
//int main()
//{
//	int measureCount = 0;
//	vector <int> measure;
//
//	cin >> measureCount;
//	int i = 0;
//
//	while (i < measureCount)
//	{
//		int input;
//		cin >> input;
//		measure.push_back(input);
//		i++;
//	}
//	sort(measure);
//
//	cout << measureCheck(measure) << endl;
//
//}
//
//int measureCheck(vector <int> measure)
//{
//	int result = 0;
//	result = measure[0] * measure[measure.size() - 1];
//	return result;
//}
//
//void sort(vector <int> (&measure))
//{
//	int temp = 0;
//
//	for (int i = 0; i < measure.size() - 1; i++)
//	{
//		for (int j = 1; j < measure.size() - 1; j++)
//		{
//			if (measure[i] > measure[i + 1])
//			{
//				temp = measure[i];
//				measure[i] = measure[i + 1];
//				measure[i + 1] = temp;
//			}
//		}
//	}
//}