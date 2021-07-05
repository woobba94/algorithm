#include <iostream>

using namespace std;

int getGCD(int, int);
int getLCM(int, int, int gcd);
int main()
{
	int num1, num2;

	cin >> num1 >> num2;


	if (num2 > num1)
	{
		int temp = num1;
		num1 = num2;
		num2 = temp;
	}

	cout << getGCD(num1, num2) << endl;

	cout << getLCM(num1, num2, getGCD(num1, num2));
}

// 최대공약수 (GCD : greatest common divisor)
int getGCD(int num1, int num2) 
{
	if (num2 == 0)
		return num1;

	return getGCD(num2, num1 % num2);
}

// 최소공배수 (LCM : lowest common multiple)
int getLCM(int num1, int num2, int gcd)
{
	return num1 * num2 / gcd;
}