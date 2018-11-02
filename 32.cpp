#include<iostream>
using namespace std;
int main()
{
	int x, y, z = 0;
	int m, n;
	cout << "ÇëÊäÈë:" << endl;
	cin >> n >> m;
	int b[20][20];		
	for (x = 0; x < n; x++)
		for (y = 0; y < m; y++)
			b[x][y] = x + y + 1;
	for (y = 0; y < m; y++)
	{
		for (x = 0; x < n; x++)
		z += b[x][y];
		cout << z << " ";
		z = 0;
	}
	cout << endl;
	system("pause");
	return 0;
}