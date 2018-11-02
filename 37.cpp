#include<iostream>
using namespace std;
void SelectSort(int g[], int n)
{
	int m , t , i , j;
	for (i = 0; i < n - 1; i++)
	{
		m = i;
		for (j = i + 1; j < n; j++)
			if (g[j] < g[m])
			{
				m = j;
				t = g[i];
				g[i] = g[m];;
				g[m] = t;
			}
	}
}
int main()
{
	int g[50];
	int n, m;
	cout << "ÇëÊäÈë:";
	cin >> n;
	cout << "ÇëÊäÈë:" << endl;
	for (m = 0; m < n; m++)
	{
		cin >> g[m];
	}
	SelectSort(g, n);
	for (int i = 0; i < n; i++)
		cout << g[i] << " ";
	cout << endl;
	system("pause");
	return 0;
}