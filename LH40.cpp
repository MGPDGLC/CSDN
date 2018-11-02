#include<iostream>
using namespace std;
int main()
{
	int n, m, a[100] = { 0 }, b[100] = { 0 }, i, j, k, x = 0;
	cin >> n >> m;
	for (i = 0; i < n; i++)
		cin >> a[i];
	for (i = 0; i < m; i++)
		cin >> b[i];
	j = 0;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n + x; j++)
			if (b[i] <= a[j])
			{
				{
					for (k = n + j; k > j; k--)
						a[k] = a[k - 1];
				}
				a[j] = b[i];
				x++;
				break;
			}
	}
	for (i = n + m - x + 2; x < m; x++, i++)
		a[i] = b[x];
	for (i = 0; i < n + m; i++)
		cout << a[i] << " ";
	system("pause");
	return 0;
}
