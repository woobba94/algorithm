//#include <iostream>
//using namespace std;
//
//int getGDC(int a, int b);
//int main() 
//{
//    int numeratorA, denominatorA;
//    int numeratorB, denominatorB;//입력
//
//    int numerator, denominator;//출력
//
//    cin >> numeratorA >> denominatorA;
//    cin >> numeratorB >> denominatorB;
//
//    // 분자 = 대각선 곱의 합
//    numerator = numeratorA * denominatorB + numeratorB * denominatorA;
//    // 분모 = 각 분모 곱
//    denominator = denominatorA * denominatorB;
//
//    // 기약분수 -> 약분 필요 -> gdc 사용 
//    int gdc = getGDC(numerator, denominator);
//    numerator /= gdc;
//    denominator /= gdc;
//
//    cout << numerator << ' ' << denominator << endl;
//
//}
//
//int getGDC(int a, int b)
//{
//    if (b == 0) 
//        return a;
//    return getGDC(b, a % b);
//}