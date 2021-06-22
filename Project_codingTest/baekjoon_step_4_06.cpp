//#include <iostream>
//using namespace std;
//
//void cal(int layer, int first, int second, int third, int &count);
//int main()
//{
//	int layer, count = 0;
//	cin >> layer;
//
//	cal(layer, 1,2,3, count);
//	cout << "count : " << count;
//	
//	
//}
//
//void cal(int layer, int first, int second, int third, int &count)
//{
//	count++;
//	if (layer == 1) {
//		cout << first << " " << third << endl;
//	}
//	else
//	{
//		cal(layer - 1, first, third, second, count);
//		cout << first << " " << third << "\n";
//		cal(layer - 1, second, first, third, count);
//	}
//}