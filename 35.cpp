#include<iostream>
using namespace std;
int main()
{
	int e[10][10];
	int i, j, n, m;
	int x, y, z;
	cout << "ÇëÊäÈë:";
	cin >> n >> m;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			e[i][j] = i + j + 1;
	for (i = m - 1; i >= 0; i--)
	{
		x = i;
		y = 0;
		z = 0;
		while (x < m && y < n)
		{
			z += e[x][y];
			x++;
			y++;
		}
		cout << z << " ";
	}
	for (j = 1; j < n; j++)
	{
		x = 0;
		y = j;
		z = 0;
		while (x < m && y < n)
		{
			z += e[x][y];
			x++;
			y++;
		}
		cout << z << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}