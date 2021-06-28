//#include <iostream>
//#include <vector>
//#include <string>
//#include <sstream> // string split : used string stream
//using namespace std;
//
//int factorial(int num);
//int main()
//{
//	int num = 0, i = 0;
//	vector <char> numVec();
//
//	cin >> num;
//	//factorial(num);
//	int digit = 0;
//	int count = 0;
//	int bigNum = factorial(num);
//	cout << bigNum << endl;
//	while (bigNum > 0)
//	{
//		digit = bigNum % 10;
//		bigNum /= 10;
//		if (digit != 0) break;
//		count++;
//	}
//	
//	cout << count;
//}
//
//
//int factorial(int num)
//{
//	int result = 1;
//	for (int i = 2; i < num + 1; i++)
//	{
//		result *= i;
//	}
//	return result;
//}
//
////vector <char> splitChar(vector <char>& numVec, int num)
////{
////	char str[50];
////	str = to_string(num);
////	vector <char> result;
////	string input = "";
////	string buffer = "";
////	input = to_string(num); // int -> string
////
////	istringstream ss(input);
////	
////
////	while (getline(ss, buffer))
////	{
////		
////		result.push_back(buffer);
////	}
////
////	return result;
////
////}
//
