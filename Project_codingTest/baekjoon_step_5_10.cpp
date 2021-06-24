//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//void press(vector<int>(&vec), vector<int> ascendingVec);
//void deduplicate(vector<int>(&vec));
//int main()
//{
//	int n = 0;
//	cin >> n;
//	vector<int> vec(n, 0);
//	
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> vec[i];
//	}
//	vector<int> ascendingVec = vec; // 벡터 복사
//
//	
//	sort(ascendingVec.begin(), ascendingVec.end()); // 정렬 벡터 만듦
//	deduplicate(ascendingVec); // 정렬 벡터 중복 제거
//	press(vec, ascendingVec);
//
//	for (int i = 0; i < n; i++)
//	{
//		cout << vec[i] << " ";
//	}
//	cout << endl;
//}
//
//// 중복 제거
//void deduplicate(vector<int>(&ascendingVec))
//{
//	int n = ascendingVec.size();
//	int i = 0;
//	while(i < ascendingVec.size())
//	{
//		if (i + 1 == ascendingVec.size()) return;
//		else if (ascendingVec[i] == ascendingVec[(long long)i + 1]) // 값 중복이면
//		{
//			if (i < ascendingVec.size())
//			{
//				ascendingVec.erase(ascendingVec.begin() + i); 
//			}
//			else break;
//			//ascendingVec.insert(ascendingVec.end(), ascendingVec[i]); // 맨 뒤로 보내고
//			
//			//ascendingVec.pop_back(); // 맨 뒤 삭제
//			/*n--;
//			ascendingVec.resize(n);*/
//		}
//		else i++;
//	}
//}
//
//void press(vector<int>(&vec), vector<int> ascendingVec)
//{
//	for (int i = 0; i < ascendingVec.size(); i++)
//	{
//		for (int j = 0; j < vec.size(); j++)
//		{
//			if (ascendingVec[i] == vec[j])
//			{
//				vec[j] = i;
//			}
//		}
//	}
//}
//
////int getMinimum(vector<int>(&vec))
////{
////	int min = 0;
////
////	for (int i = 0; i < vec.size(); i++)
////	{
////		if (min < vec[i])
////			min = vec[i];
////	}
////
////	return min;
////}
//
////void ascendingSort(vector<int>(&vec))
////{
////	for (int i = 0; i < vec.size(); i++)
////	{
////		for (int j = 1; j < vec.size() ; j++)
////		{
////			if (vec[(long long)j - 1] > vec[j])
////			{
////				vec.insert(vec.begin() + j - 1, 1, vec[j]);
////
////			}
////		}
////	}
////}