//#include <iostream>
//
//using namespace std;
//const int MAX_SIZE = 100000;
//
//void inputCharArr(char* (&numArr), int& size, int input);
//void sortDown(char* (&numArr), int size);
//int main(void)
//{
//	char* numArr = new char [MAX_SIZE];
//	int input;
//	int size = 0;
//	bool existZero = false;
//	cin >> input;
//
//	// 받은 숫자를 char배열에 한개씩 저장
//	inputCharArr(numArr, size, input);
//
//
//	long long sum = 0;
//
//	for (int i = 0; i < size; i++)
//	{
//		// 각 자리수 합
//		sum += int(numArr[i]);
//		// 0 존재 체크
//		if (int(numArr[i]) == 0)
//		{
//			existZero = true;
//		}
//	}
//	// 각 자리수의 합이 3의 배수가 아니거나 0이 없다면
//	if (sum % 3 != 0 || existZero == false)
//	{
//		cout << -1 << endl;
//	}
//	else
//	{
//		sortDown(numArr, size);
//		for (int i = 0; i < size; i++)
//		{
//			cout << int(numArr[i]);
//		}
//		
//	}
//}
//void inputCharArr(char* (&numArr), int& size, int input)
//{
//	int div = 10;
//	int temp = 0;
//	int i = 0;
//	while (input != 0)
//	{
//		temp = input % div;
//		input /= 10;
//		numArr[i] = temp;
//		i++;
//		size++;
//	}
//}
//
//// 내림차순
//void sortDown(char* (&numArr), int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size - 1; j++)
//		{
//			if (numArr[j] < numArr[j + 1])
//			{
//				char temp = numArr[j];
//				numArr[j] = numArr[j + 1];
//				numArr[j + 1] = temp;
//			}
//		}
//	}
//}