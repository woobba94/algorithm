//#include <iostream>
//using namespace std;
//class Student
//{
//private:
//	int num = 0;
//	int count = 0;
//public:
//	int arr[5] = {};
//	bool checked[1001] = {};
//
//	void setNum(int k)
//	{
//		num = k;
//	}
//
//	int getNum()
//	{
//		return num;
//	}
//
//	void increaseCount()
//	{
//		count++;
//	}
//
//	int getCount()
//	{
//		return count;
//	}
//};
//
//void check(int i, int j);
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	Student* s = new Student[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			cin >> s[i].arr[j];
//		}
//		s[i].setNum(i + 1);
//	}
//
//	for(int i = 0 ; i < n; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			for (int k = 0; k < 5; k++)
//			{
//				if (s[i].arr[k] == s[j].arr[k])
//				{
//					s[i].checked[j] = true;
//					s[j].checked[i] = true;
//				}
//			}
//		}
//	}
//	
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (s[i].checked[j] == true)
//				s[i].increaseCount();
//		}
//	}
//
//	int maxCount = 0;
//	int target = 1;
//	for (int i = 0; i < n; i++)
//	{
//		if (maxCount < s[i].getCount())
//		{
//			maxCount = s[i].getCount();
//			target = s[i].getNum();
//		}
//	}
//
//	cout << target;
//}
//
