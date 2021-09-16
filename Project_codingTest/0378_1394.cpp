//#include <iostream>
//using namespace std;
//
//int pow(int base, int k);
//int main()
//{
//	string input, target;
//	cin >> input >> target;
//
//	int inputSize = input.length();
//	int targetSize = target.length();
//
//	int count = 0;
//	for (int i = 0; i < targetSize; i++)
//	{
//		count += pow(inputSize, i + 1);
//	}
//	cout << count << endl;
//	
//	for (int i = targetSize - 1; i >= 0; i--)
//	{
//		int k = 0;
//		for (int j = inputSize - 1; j >= 0; j--)
//		{
//			if (target[i] != input[j])
//			{
//				count -= pow(inputSize, k);
//				k++;
//			}
//			
//		}
//	}
//	cout << count;
//}
//
//int pow(int base, int k)
//{
//	int result = 1;
//	while (k--)
//	{
//		result *= base;
//	}
//	return result;
//}