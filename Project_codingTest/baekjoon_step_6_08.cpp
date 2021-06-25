//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//void func(vector <int>(&numbers), vector <int>(&vec), long long & k);
//void vecSort(vector <int> (&numbers));
//int measure(int num1, int num2);
//
//int main()
//{
//	int n;
//	long long k = 0;
//	cin >> n;
//	
//	vector <int> numbers(n);
//	vector <int> vec;
//
//	for (int i = 0; i < n; i++) 
//	{
//		int input;
//		cin >> input;
//		numbers[i] = input;
//	}
//
//	vecSort(numbers);
//
//	k = numbers[1] - numbers[0];
//	func(numbers, vec, k);
//
//	cout << endl;
//
//	for (int i = 0; i < vec.size(); i++)
//	{
//		cout << vec[i] << " ";
//	}
//
//}
//
//int measure(int num1, int num2)
//{
//	int result = 0;
//	if (num1 >= num2) result = num1;
//	else result = num2;
//	while (true)
//	{
//		if (num1 % result == 0 && num2 % result == 0) break;
//		result--;
//	}
//
//	return result;
//}
//
//
//void func(vector <int> (&numbers), vector <int> (&vec), long long &k)
//{
//	for (int i = 2; i < k; i++) {
//		k = measure(k, numbers[i] - numbers[i - 1]);
//	}
//
//	for (int i = 2; i * i <= k; i++)
//	{
//		if (k % i == 0)
//		{
//			vec.push_back(i);
//			vec.push_back(k / i);
//		}
//	}
//
//	vec.push_back(k);
//	vecSort(vec);
//	vec.erase(unique(vec.begin(), vec.end()), vec.end());
//}
//
//void vecSort(vector <int>(&numbers))
//{
//	int temp = 0;
//
//	for (int i = 0; i < numbers.size(); i++)
//	{
//		for (int j = 0; j < numbers.size() - 1; j++)
//		{
//			if (numbers[j] > numbers[j + 1])
//			{
//				temp = numbers[j];
//				numbers[j] = numbers[j + 1];
//				numbers[j + 1] = temp;
//			}
//		}
//	}
//}
