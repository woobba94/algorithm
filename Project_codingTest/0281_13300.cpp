//#include <iostream>
//using namespace std;
//
//class Student
//{
//public:
//	bool sex;
//	int grade;
//};
//int getSum(int arr[], int k);
//int main()
//{
//	int n, k;
//	cin >> n >> k;
//
//	int girl[7] = {};
//	int boy[7] = {};
//
//	Student* s = new Student[n];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> s[i].sex >> s[i].grade;
//		if (s[i].sex == 1)
//		{
//			boy[s[i].grade]++;
//		}
//		else
//		{
//			girl[s[i].grade]++;
//		}
//	}
//
//	cout << getSum(boy, k) + getSum(girl, k);
//	delete[] s;
//}
//
//int getSum(int arr[], int k)
//{
//	int sum = 0;
//	for (int i = 1; i < 7; i++)
//	{
//		if (arr[i] % k == 0)
//			sum += arr[i] / k;
//		else
//			sum += arr[i] / k + 1;
//	}
//	return sum;
//}