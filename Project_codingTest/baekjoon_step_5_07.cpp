//#include <iostream>
//#include <string.h>
//using namespace std;
//
//void sort(char** (&word), int size);
//void insertCharArr(char to[], char from[], int fromSize);
//int main()
//{
//	int n;
//	int wordSize = 50;
//	cin >> n;
//	// 2차원 배열 동적할당
//	char** word;
//	word = new char* [n]();
//	for (int i = 0; i < n; i++) word[i] = new char[wordSize]();
//	// 할당 끝
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> word[i];
//	}
//
//	sort(word, n);
//
//	
//	for (int i = 0; i < n; i++)
//	{
//		cout << word[i] << endl;
//	}
//
//}
//
//void sort(char** (&word), int size)
//{
//	char *temp;
//	for (int i = 0; i < size; i++)
//	{
//		
//		for (int j = 0; j < size - 1; j++)
//		{
//			temp = new char[strlen(word[j])]();
//			if (strlen(word[j]) > strlen(word[j + 1]))
//			{
//				//insertCharArr(temp, word[j], strlen(word[j]));
//				for (int k = 0; k <= strlen(word[j]); k++)
//				{
//					temp[k] = word[j][k];
//				}
//				word[j] = word[j + 1];
//				word[j + 1] = temp;
//			}			
//		}
//	}
//}
//
//void insertCharArr(char to[], char from[], int fromSize)
//{
//	//cout << "insert함수 진입" << endl;
//	for (int i = 0; i < fromSize; i++)
//	{
//		to[i] = from[i];
//	}
//}