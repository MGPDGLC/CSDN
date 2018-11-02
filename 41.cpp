#include<iostream>
using namespace std;
void merge(int *a, int start, int mid, int end)
{
	int *tmp = new int[end - start + 1];
	int i = start;
	int j = mid + 1;
	int k = 0;
	while (i <= mid && j <= end)
	{
		if (a[i] <= a[j])
			tmp[k++] = a[i++];
		else
			tmp[k++] = a[j++];
	}
		while (i <= mid)
			tmp[k++] = a[i++];
		while (j <= end)
			tmp[k++] = a[j++];
	for (i = 0; i < k; i++)
		a[start + i] = tmp[i];
	delete[] tmp;
}
void sortUptoDown(int *a, int start, int end)
{
	if (a == NULL || start >= end)
		return;
	int mid = (start + end) / 2;
	sortUptoDown(a, start, mid);
	sortUptoDown(a, mid + 1, end);
	merge(a, start, mid, end);
}
int main()
{
	int i;
	int n;
	int a[1024];
	cout << "ÇëÊäÈë:";
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> a[i];

	cout << "before sort:";
	for (i = 0; i < n; i++)
	cout << a[i] << " ";
	cout << endl;

	sortUptoDown(a, 0, n - 1);
	for (i = 0; i < n; i++)
		cout << a[i] << " ";
	return 0;
}