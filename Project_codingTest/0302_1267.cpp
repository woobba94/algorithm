//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	int time;
//	int costY = 0;
//	int costM = 0;
//	while (n--)
//	{
//		cin >> time;
//		
//		costY += ((time / 30) + 1) * 10;
//
//		costM += ((time / 60) + 1) * 15;
//	}
//	if (costY <= costM)
//	{
//		cout << "Y ";
//		if (costY == costM)
//			cout << "M ";
//		cout << costY;
//	}
//	else
//	{
//		cout << "M " << costM;
//	}
//}