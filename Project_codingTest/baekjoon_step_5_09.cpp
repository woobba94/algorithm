//#include <iostream>
//#include <vector>
//using namespace std;
//
//void sort(vector<int> (&age), vector<string> (&name), int n);
//int main()
//{
//	int n;
//	cin >> n;
//	vector<int> age(n);
//	vector<string> name(n);
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> age[i] >> name[i];
//	}
//	sort(age, name, n);
//	for (int i = 0; i < n; i++)
//	{
//		cout << age[i] << " " << name[i] << endl;
//	}
//
//}
//
//void sort(vector<int> (&age), vector<string> (&name), int n)
//{
//	/*vector<int> ageTemp(1);
//	vector<string> nameTemp(1);*/
//
//	// age vector의 제일 앞자리 선언
//	vector<int>::iterator frontAge = age.begin();
//	// name vector의 제일 앞자리 선언
//	vector<string>::iterator frontName = name.begin();
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 1; j < n; j++)
//		{
//			// 맨앞 보다 더 크면 큰것 맨앞으로
//			if (age[0] > age[j])
//			{
//				age.insert(frontAge, age[j]);
//				name.insert(frontName, name[j]);
//			}
//		}
//	}
//
//}