//#include <iostream>
//
//using namespace std;
//void lottoCalc(int* arr, int selected[], int index, int depth, int size);
//int main()
//{
//	int k = 0;
//	int* arr;
//	int selected[6] = { 0, };
//
//	while (1)
//	{
//		cin >> k;
//		if (k == 0) break;
//		arr = new int[k];
//
//		for (int i = 0; i < k; i++)
//		{
//			cin >> arr[i];
//		}
//		lottoCalc(arr, selected, 0, 0, k);
//		cout << endl;
//	}
//}
//
//void lottoCalc(int* arr, int selected[], int index, int selectedCount, int size)
//{
//	// 6자리가 완성되면 출력 
//	if (selectedCount == 6)
//	{ 
//		for (int i = 0; i < 6; ++i) 
//		{ 
//			cout << selected[i] << ' ';
//		} 
//		cout << endl; 
//		return; 
//	} 
//	// 6자리가 완성되기 전에 index가 범위를 넘어버린 경우 
//	else if (index == size)
//	{ 
//		return; 
//	} 
//	selected[selectedCount] = arr[index];
//
//	// arr[index]를 선택하는 경우 
//	lottoCalc(arr, selected, index + 1, selectedCount + 1, size);
//
//	// arr[index]를 선택하지 않는 경우 
//	lottoCalc(arr, selected, index + 1, selectedCount, size);
//}