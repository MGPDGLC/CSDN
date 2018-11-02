#include<iostream>
using namespace std;
void InsertSort(int a[], int n);
int main()
{
	int a[50];
	int n, x;
	cout << "ÇëÊäÈë:";
	cin >> n;
	cout << "ÇëÊäÈë:";
	for (x = 0; x < n; x++)
		cin >> a[x];
	InsertSort(a, n);
	for (x = 0; x < n; x++)
		cout << a[x] << " ";
	cout << endl;
	system("pause");
	return 0;
}
void InsertSort(int a[],int n)
{
	int i, j, m;
	for (i = 1; i < n; i++)
	{
		j = i;
		while (j > 0 && a[j] < a[j - 1])
		{
			m = a[j];
			a[j] = a[j - 1];
			a[j - 1] = m;
			j--;
		}
	}
}