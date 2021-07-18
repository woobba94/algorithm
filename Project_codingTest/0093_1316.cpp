//#include <iostream>
//
//using namespace std;
//
//int main() 
//{
//	int n;
//	int count = 0;
//	char str[101]; // 문자열 길이 최대 100
//	cin >> n;
//
//	for (int i = 0; i < n; i++) 
//	{
//		cin >> str;
//
//		bool flag = true;
//
//		for (int j = 0; j < 101; j++) 
//		{
//			if (str[j] == '\0') break;
//			for (int k = 0; k < j; k++) 
//			{
//				// 앞뒤가 다른데 앞에 같은 알파벳이 하나라도 있으면
//				if (str[j] != str[j - 1] && str[j] == str[k]) 
//				{
//					flag = false;
//					break;
//				}
//			}
//		}
//		if (flag == true) count++;
//	}
//
//	cout << count;
//}