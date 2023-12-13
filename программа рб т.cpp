#include<iostream>
using namespace std;

int main()
{
	int N, p, M;
	do
	{
		cin >> N;
	} while (N <= 3 || N % 2 == 0);
	p = (N + 1) / 2;
	M = (N - 1) / 2;
	for (int i = 1; i <= p; ++i)
	{
		for (int j = 1; j <= M; ++j)
		{
			cout << ' ';
		}
		M = M - 1;
		for (int k = 1; k <= 2 * i - 1; ++k)
			cout << '*';
		cout << endl;
	}
	return 0;
}