//#include <iostream>
//#include <string>
//#include <cstdlib>//abs
//#include <algorithm>//min
//using namespace std;
//
//int INF = 1000001;
//int noButton[10];//1이면 고장난 버튼
//
////누를 수 있는 번호인지
//bool Possible(int num) {
//	//누르려는 번호가 0인 경우 따로
//	if (num == 0) {
//		//버튼 0이 고장난 경우
//		if (noButton[0] == 1)
//			return false;
//		else
//			return true;
//	}
//	while (num) {
//		//고장난 버튼의 번호가 포함되어 있으면 false반환
//		if (noButton[num % 10] == 1) {
//			return false;
//		}
//		num /= 10;
//	}
//	return true;
//}
//
//int getMinimum(int num) {
//	//현재 채널인 100에서 + 또는 -버튼으로 보려는 채널로 가는 경우
//	int From100 = abs(num - 100);
//	int Min = INF;
//	int tmp;
//	for (int i = 0; i <= INF; i++) {
//		//누를 수 있는 번호면
//		if (Possible(i)) {
//			//번호 길이
//			tmp = to_string(i).length();
//			//+-누르는 횟수
//			tmp += abs(i - num);
//			//최솟값 갱신
//			Min = min(Min, tmp);
//		}
//	}
//	//100에서 +,-로 접근하는 것과 비교
//	return min(From100, Min);
//}
//
//int main() {
//	int N, M;
//	cin >> N >> M;
//	for (int i = 0; i < M; i++) {
//		int n;
//		cin >> n;
//		noButton[n] = 1;
//	}
//	cout << getMinimum(N) << endl;
//	return 0;
//}