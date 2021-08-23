//#include <iostream>
//using namespace std;
//
//int n;
//int arr[11];
//int maxVal = -1000000001, minVal = 1000000001;
//void calc(int num, int index, int plus, int minus, int multiple, int divide);
//int main()
//{
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		cin >> arr[i];
//
//	int plus, minus, multiple, divide;
//	cin >> plus >> minus >> multiple >> divide;
//
//	calc(arr[0], 1, plus, minus, multiple, divide);
//	cout << maxVal << endl;
//	cout << minVal;
//}
//
//void calc(int num, int index, int plus, int minus, int multiple, int divide)
//{
//	if (index == n)
//	{
//		if (minVal > num) minVal = num;
//		if (maxVal < num) maxVal = num;
//	}
//	if (plus) calc(num + arr[index], index + 1, plus - 1, minus, multiple, divide);
//	if (minus) calc(num - arr[index], index + 1, plus, minus - 1, multiple, divide);
//	if (multiple) calc(num * arr[index], index + 1, plus, minus, multiple - 1, divide);
//	if (divide) calc(num / arr[index], index + 1, plus, minus, multiple, divide - 1);		
//}