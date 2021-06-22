#include <iostream>
using namespace std;

int main() {
	int c, n, avg, k= 0;
	double result;
	cin >> c;

	for (int i = 0; i < c; i++)
	{
		avg = 0;
		k = 0;
		cin >> n;
		int* score = new int[n];
		for (int j = 0; j < n; j++)
		{
			cin >> score[j];
			avg += score[j];
		}
		avg /= n;
		for (int j = 0; j < n; j++)
		{
			if (avg < score[j])
			{
				k += 1;
			}
		}
		result = (double)k / n * 100;
		cout << fixed;
		cout.precision(3);
		cout << result << "%" << endl;
		
	}
}