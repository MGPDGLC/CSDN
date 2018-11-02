#include<iostream>
using namespace std;
int main()
{
	int a[100];
	int i, j = 0, n, t;
	cout << "ÇëÊäÈë:";
	cin >> n;
	j = n - 1;
	cout << "ÇëÊäÈë:";
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (i = 0; i < j;)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
		i++;
		j--;
	}
	for (i = 0; i < n; i++)
	{
		cout << a[i];
		cout << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}