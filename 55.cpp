#include<iostream>
using namespace std;
int search(int a[], int low, int mid, int high, int target);
int main()
{
	int a[100];
	int n, i;
	int target;
	int low, mid, high;
	cout << "ÇëÊäÈë:";
	cin >> n;
	cout << "ÇëÊäÈë:";
	cin >> target;
	cout << "ÇëÊäÈë:";
	for (i = 0; i < n; i++)
		cin >> a[i];
	search(a, 0, 0, n - 1, target);
	return 0;
}
int search(int a[], int low, int mid, int high, int target)
{
	mid = low + (high - low) / 2;
	if (low < high)
	{
		if (a[mid] > target)
			high = mid - 1;
		else if (a[mid] < target)
			low = mid + 1;
		else
		{
			cout << "Yes, the number ";
			cout << target;
			cout << " is in index of ";
			cout << mid + 1;
			return 0;
		}
		search(a, low, mid, high, target);
	}
		if (low > high)
			cout << "No,the number is not in index";
		return 0;
}