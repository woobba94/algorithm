//#include <iostream>
//using namespace std;
//
//int main()
//{
//	// SUN~MON 저장 (7개, 3글자)
//	char week[8][4] = { {'S','U','N'}, {'M','O','N'}, {'T','U','E'}, {'W','E','D'},
//						{'T','H','U'}, {'F','R','I'}, {'S','A','T'}  }; 
//
//	int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//
//	int x, y;
//
//	int count = 0;
//
//	cin >> x >> y;
//
//	// 1월~x월 계산
//	for (int i = 0; i < x; i++)  
//	{
//		// 입력한 월이 i + 1이면
//		if ((i + 1) == x)  
//		{
//			// 남은 날짜를 더해줌
//			count += y;  
//		}
//		else
//		{
//			// 해당하는 달 일수 더해줌
//			count += month[i];  
//		}
//	}
//
//	for (int i = 0; i < 3; i++)
//	{
//		cout << week[(count % 7)][i];
//	}
//	
//	cout << endl;
//
//}