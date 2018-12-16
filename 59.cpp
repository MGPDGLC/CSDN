#include<iostream>
using namespace std;
void prime(int n)
{
	bool *primes = new bool[n + 1];
	int i, j, k;
	for (i = 2; i < n + 1; i++)
		primes[i] = true;
	for (j = 2; j < n + 1; j++)
		if (primes[j])
			for (k = 2; j*k <= n; k++)
				primes[j*k] = false;
	for (int t = 2; t < n + 1; t++)
		if (primes[t])
			cout << t << " ";
	delete[] primes;
}
int main()
{
	int n;
	cin >> n;
	prime(n);
	return 0;
}