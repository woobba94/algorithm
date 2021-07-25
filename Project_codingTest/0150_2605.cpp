//#include <iostream>
//using namespace std;
//
//class Student
//{
//public:
//	int id = 0;
//	int card = 0;
//};
//
//void swap(int& a, int& b);
//int main()
//{
//	int i;
//	int n;
//	cin >> n;
//
//	Student* arr = new Student[n];
//	for (i = 0; i < n; i++)
//	{
//		arr[i].id = i + 1;
//		cin >> arr[i].card;
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		int k = arr[i].card;
//		int j = i;
//		while (k--)
//		{
//			swap(arr[j].id, arr[j - 1].id);
//			j--;
//		}
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		cout << arr[i].id << " ";
//	}
//}
//
//void swap(int &a, int &b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}