//#include <iostream>
//using namespace std;
//
//// 문제 해석:
//// 두 점 A(x1, y1), B(x2, y2) 가 주어지고 
//// 점C에 대해 A-C 거리가 r1, B-C 거리가 r2일때,
//// 점 C가 가지는 좌표 수를 구하여라
//
//int check(int arr1[], int arr2[]);
//double getDistance(int arr1[], int arr2[]);
//int main()
//{
//	int A[3], B[3];
//	int T;
//	cin >> T;
//	while (T != 0)
//	{
//		cin >> A[0] >> A[1] >> A[2] >> B[0] >> B[1] >> B[2];
//		cout << check(A, B) << endl;
//		T--;
//	}
//}
//// 두 원이 어떤관계인지 검사하는 함수
//int check(int arr1[], int arr2[])
//{
//	// 두 원이 겹치는 경우 -> 무한대
//	if (arr1[2] == arr2[2] && getDistance(arr1, arr2) == 0)	return -1;
//	// 두 원이 일부 겹침 -> 2개
//	else if ((double)arr1[2] + arr2[2] > getDistance(arr1, arr2) && getDistance(arr1, arr2) != 0) return 2;
//	// 두 원이 접함 -> 1개
//	else if ((double)arr1[2] + arr2[2] == getDistance(arr1, arr2)) return 1;
//	// 나머지 -> 0개
//	else return 0;
//}
//// 두 점 사이 거리 구하는함수
//double getDistance(int arr1[], int arr2[])
//{
//	double result; // 두 점 사이 거리
//	result = sqrt(abs(arr1[0] - arr2[0]) * abs(arr1[0] - arr2[0]) +
//		abs(arr1[1] - arr2[1]) * abs(arr1[1] - arr2[1]));
//
//	return result;
//}