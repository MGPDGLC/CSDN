#include<iostream>
using namespace std;
int main()
{
	int h[50];
	int n, m, i, j;
	cout << "请输入:";
	cin >> n;
	cout << "请输入" << n << "个排好序的数:";
	for (i = 0; i < n; i++)
	{
		cin >> h[i];
	}
	cout << "请输入:";
	cin >> m;
	for (i = 0; i < n; i++)
	{
		if (m < h[i])
		{
			for (j = n; j > i; j--)
			{
				h[j] = h[j - 1];
			}
			h[i] = m;
			break;
		}
	}
	for (i = 0; i <= n; i++)
	cout << h[i] << " ";
	cout << endl;
	system("pause");
	return 0;
}
