#include<iostream>
using namespace std;
const int N = 1024;
int main()
{
	int i, j;
	int a[N];
	int n, m = 0;
	cin >> n;
	for (i = 0; i < N; i++)
		a[i] = 0;
	for (i = 0; i < n; i++)
	{
		cin >> m;
		a[m]++;
	}
	for (i = 0; i < N; i++)
		for (j = 1; j <= a[i]; j++)
			cout << i << " ";
	return 0;
}

