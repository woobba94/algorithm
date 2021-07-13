//#include <iostream>
//using namespace std;
//
//double getAvr(int* scores, int size);
//
//int main()
//{
//	int caseCount = 0;
//	cin >> caseCount;
//
//	while (caseCount--)
//	{
//		int studentCount = 0;
//		cin >> studentCount;
//
//		int* scores = new int[studentCount];
//
//		for (int i = 0; i < studentCount; i++)
//		{
//			cin >> scores[i];
//		}
//		double avr = getAvr(scores, studentCount);
//		double count = 0;
//		for (int i = 0; i < studentCount; i++)
//		{
//			if (avr < scores[i]) count++;
//		}
//		cout << fixed;
//		cout.precision(3);
//		cout << count / studentCount * 100 << "%" << endl;
//	}
//}
//
//double getAvr(int* scores, int size)
//{
//	double sum = 0;
//	for (int i = 0; i < size; i++)
//	{
//		sum += scores[i];
//	}
//
//	return sum / size;
//}