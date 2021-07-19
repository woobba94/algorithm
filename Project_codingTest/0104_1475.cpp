//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	// N은 1,000,000보다 작거나 같은 자연수 또는 0
//	char input[8] = {};
//	cin >> input;
//	int needNum[10] = {};
//
//	
//	for (int i = 0; i < 8; i++)
//	{
//		if (input[i] == '\0') break;
//
//		// 문자 배열에 9가 들어있으면 6 count++
//		if (input[i] - '0' == 9)
//		{
//			needNum[6]++;
//		}
//		else
//		{
//			needNum[input[i] - '0']++;
//		}
//		
//	}
//
//	needNum[6] = needNum[6] / 2 + needNum[6] % 2;
//
//	int needSet = 0;
//
//	// 가장 많이 필요로하는 양만큼 갱신
//	for (int i = 0; i < 10; i++)
//	{
//		// 더 많이 필요로하면 갱신
//		if (needSet < needNum[i])
//		{
//			needSet = needNum[i];
//		}
//	}
//	
//	cout <<  needSet;
//}