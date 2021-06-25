//#include <iostream>
//#include <vector>
//using namespace std;
//
//string relationCheck(int num1, int num2);
//
//int main()
//{
//	vector <int> num1, num2;
//
//	while (1)
//	{
//		int i = 0;
//		int input1 = 0, input2 = 0;
//
//		cin >> input1 >> input2;
//		if (input1 == 0 && input2 == 0)break;
//
//		num1.push_back(input1);
//		num2.push_back(input2);
//
//		i++;
//	}
//
//	for (int i = 0; i < num1.size(); i++)
//	{
//		cout << relationCheck(num1[i], num2[i]) << endl;
//	}
//
//}
//
//string relationCheck(int num1, int num2)
//{
//	if (num2 % num1 == 0) // num1 이 약수
//	{
//		return "factor";
//	}
//	else if (num1 % num2 == 0) // num1 이 배수
//	{
//		return "multiple";
//	}
//	else return "neither";
//}