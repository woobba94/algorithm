//#include <bits/stdc++.h>
//
//using namespace std;
//const int MAX_SIZE = 10001;
//char input[MAX_SIZE];
//int getSize(char arr[]);
//int main()
//{
//	string endSign = "Was it a cat I saw?";
//	int count = 1;
//	while (1)
//	{
//		
//		cin.getline(input, MAX_SIZE);
//
//		if (input == endSign) return 0;
//
//		int k = count + 1;
//		int size = getSize(input);
//
//		for (int i = 0; i < size; i += k)
//		{
//			cout << input[i];
//		}
//		cout << '\n';
//		count++;
//	}
//}
//
//int getSize(char arr[])
//{
//	for (int i = 0; i < MAX_SIZE; i++)
//	{
//		if (input[i] == '\0') return i;
//	}
//}