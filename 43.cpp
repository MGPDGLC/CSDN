#include<iostream>
using namespace std;
void sort(int a[], int n)
{
	int i, j, t;
	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - i - 1; j++)
			if(a[j] > a[j+1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
}
int main()
{
	int n, i;
	int a[100];
	cout << "ÇëÊäÈë:";
	cin >> n;
	cout << "ÇëÊäÈë:";
	for (i = 0; i < n; i++)
		cin >> a[i];
	sort(a, n);
	for (i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
	return 0;
}