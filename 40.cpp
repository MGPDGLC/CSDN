#include<iostream.>
using namespace std;
int main()

{
	int a[50], b[50], c[100];
	int n, m;
	int x = 0, y = 0, z = 0;
	cout << "ÇëÊäÈë:";
	cin >> n;
	cout << "ÇëÊäÈë:";
	cin >> m;
	cout << "ÇëÊäÈë:";
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << "ÇëÊäÈë:";
	for (int j = 0; j < m; j++)
		cin >> b[j];
	while (x < n && y < m)
	{
		if (a[x] > b[y])
			c[z++] = b[y++];
		if (a[x] < b[y])
			c[z++] = a[x++];
		if (a[x] == b[y])
		{
			c[z++] = a[x++];
			c[z++] = b[y++];
		}
	}
	if (x == n)
	{
		for (; y < m; y++)
		c[z++] = b[y];
	}
	if (y == m)
	{
		for (; x < n; x++)
		c[z++] = a[x];
	}
	for (int l = 0; l < n + m; l++)
		cout << c[l] << " ";
	cout << endl;
	system("pause");
	return 0;
}