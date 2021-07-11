//#include <iostream>
//
//using namespace std;
//
//int getSmallVal(int a, int b);
//int main()
//{
//	int limit, date, vacation;
//	int result;
//	int caseCount = 1;
//
//	while (true) 
//	{
//		result = 0;
//		cin >> limit >> date >> vacation;
//		if (limit == 0 && date == 0 && vacation == 0)	break;
//
//		result = (vacation / date) * limit;
//
//
//		result += getSmallVal(limit, vacation % date);
//
//		cout << "Case " << caseCount << ": " << result << endl;
//
//		caseCount++;
//	}
//}
//
//int getSmallVal(int a, int b)
//{
//	return a < b ? a : b;
//}