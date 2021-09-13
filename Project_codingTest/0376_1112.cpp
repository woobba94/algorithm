#include <iostream>
#include <cmath>
using namespace std;

string result;
int result2 = 0;
int x, base, temp;
void calc(int n);
void calc2(int n);
int getPow(int base, int k);
int main()
{
	cin >> x >> base;
	if (!x)
	{
		cout << 0;
		return 0;
	}
	if(base > 0)
		calc(x);
	else
	{
		calc2(x);
	}
	cout << result2;
}
void calc2(int n)
{
	int k = 0;
	while (n)
	{
		result2 += n % base * getPow(base, k);
		n /= 10;
		k++;
	}
}

int getPow(int base, int k)
{
	int pow = 1;
	if (k == 0) return pow;
	while (k--)
	{
		pow *= base;
	}
	return pow;
}

void calc(int n)
{
	if (n < 0)
	{
		result += '-';
		n *= -1;
	}
	if (n) 
	{
		calc(n / base);
		temp = n % base;
		if (temp <= 9)
			result += (temp + '0');
		else result += temp - 10 + 'A';
	}
}