#include<iostream>
using namespace std;
int main()
{
	int i, j, k;
	int a[10][10];
	int n;
	cout << "ÇëÊäÈë:";
	cin >> n;
	for (i = 0; i < n; i++)
		for (j = 0; j <= i; j++)
		{
			if (j == 0)
				a[i][j] = 1;
			if (i == j)
				a[i][j] = 1;
			if ((i > 1 && j > 0) && i != j)
				a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
		}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
			cout << a[i][j] << "\t";
		cout << endl;
	}
	
	return 0;
}

