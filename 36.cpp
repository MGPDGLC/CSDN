#include<iostream>
using namespace std;
int main()
{
	int f[100] = {0};
	int n, m = 0, t = 1, x, y;
	cout << "ÇëÊäÈë:";
	cin >> n;
	cout << "ÇëÊäÈë:";
	for (x = 0; x != n; x++)
	{
		cin >> f[x];
	}
	for (y = 0; y < n; y++)
	{
		if (f[y] > f[t])
		{
			m = f[y];
			t = y;
		}
		if (f[y] < f[t])
		{
			m = f[t];
		}
	}
	cout << m << " ";
	cout << t + 1 << endl;
	system("pause");
	return 0;
}
