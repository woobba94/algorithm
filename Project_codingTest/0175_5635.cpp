//#include <iostream>
//using namespace std;
//
//
//class Student {
//public:
//	char name[50];
//	int d, m, y;
//};
//void sort(Student* s, int n);
//int main()
//{
//	int n;
//	cin >> n;
//	Student* s = new Student[n];
//
//	int d, m, y;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> s[i].name >> s[i].d >> s[i].m >> s[i].y;
//	}
//	sort(s, n);
//
//	cout << s[0].name << endl;
//	cout << s[n - 1].name;
//}
//
//void sort(Student* s, int n)
//{
//	Student temp;
//	// d 기준 정렬
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n - 1; j++)
//		{
//			if (s[j].d < s[j + 1].d)
//			{
//				temp = s[j];
//				s[j] = s[j + 1];
//				s[j + 1] = temp;
//			}
//		}
//	}
//
//	// m 기준 정렬
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n - 1; j++)
//		{
//			if (s[j].m < s[j + 1].m)
//			{
//				temp = s[j];
//				s[j] = s[j + 1];
//				s[j + 1] = temp;
//			}
//		}
//	}
//
//	// y 기준 정렬
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n - 1; j++)
//		{
//			if (s[j].y < s[j + 1].y)
//			{
//				temp = s[j];
//				s[j] = s[j + 1];
//				s[j + 1] = temp;
//			}
//		}
//	}
//}