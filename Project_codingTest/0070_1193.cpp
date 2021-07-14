//#include<iostream> 
//
//using namespace std; 
//
//int main() 
//{
//	//분자
//	int numerator = 0;
//	//분모
//	int denominator = 0;
//
//	int input; 
//
//	int layer = 1; 
//	cin >> input;
//	// 찾을 번호 입력 
//
//	// 몇 째 줄에 있는지 검사 
//	while (layer < input)
//	{ 
//		input -= layer; // 줄만큼 감소 (줄 마다의 개수 빼줌)
//		layer++;
//	} 
//	
//	// 해당 줄이 짝수
//	if (layer % 2 == 0)		
//	{ 
//		// 분모 감소 분자 증가 
//		for (int i = layer; 0 < i; i--)
//		{ 
//			denominator = i; 
//			numerator++; 
//			input--;
//			// 찾았을 때
//			if (input == 0) break;
//		} 
//	} 
//	else // 홀수일떄 
//	{ 
//		// 분모 증가 분자감소 
//		for (int i = layer; 0 < i; i--)
//		{ 
//			numerator = i; 
//			denominator++; 
//			input--;
//			if (input == 0) break;
//		} 
//	} 
//	cout << numerator << "/" << denominator;
//}
//
