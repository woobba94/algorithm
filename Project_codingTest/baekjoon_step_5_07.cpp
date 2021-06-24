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
//	char temp[50];
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < strlen(word[i]) - 1; j++)
//		{
//			if (strlen(word[j]) > strlen(word[j + 1]))
//			{
//				//insertCharArr(temp, word[j], strlen(word[j]));
//				strcpy_s(temp, word[j]);
//				word[j] = word[j + 1];
//				word[j + 1] = temp;
//			}
//		}
//	}
//	cout << endl;
//	cout << "정렬 후/" << endl;
//	cout << "word[0] : " << word[0] << endl;
//	cout << "word[1] : " << word[1] << endl;
//	cout << "word[2] : " << word[2] << endl;
//	cout << "word[3] : " << word[3] << endl;
//	cout << "word[4] : " << word[4] << endl;
//	cout << endl;
//
//	
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