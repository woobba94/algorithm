//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int counting[26] = {};
//
//	int n = 0;
//	cin >> n;
//	char input[31] = {};
//
//	char* arr = new char[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> input;
//		arr[i] = input[0];
//
//		if ('a' <= arr[i])
//			counting[(arr[i] - 'a')]++;
//	}
//	bool flag = false;
//	char result;
//	for (int i = 0; i < 26; i++)
//	{
//		if (counting[i] >= 5)
//		{
//			flag = true;
//			result = 'a' + i;
//			cout << result;
//		}
//	}
//
//	if (flag == false) cout << "PREDAJA";
//	
//}