#include<iostream>
using namespace std;
int search(int a[], int low, int mid, int high, int x)
{
	while (low <= high)
	{
		mid = low + (high - low) / 2;//折半
		if (a[mid] > x)//从前半段中寻找
			high = mid - 1;
		else if (a[mid] < x)//从后半段中寻找
			low = mid + 1;
		else
		{
			cout << "Yes,the number " << x << " is in index of " << mid + 1;
			return mid;
		}
			
	}
	if (low > high)
		cout << "No,the number is not in index";
}
int main()
{
	int n, i, x;
	
	int a[100];
	cout << "请输入:";//输入数组长度
	cin >> n;
	cout << "请输入:";//输入要查找的数
	cin >> x;
	cout << "请输入:";//输入数组数据
	for (i = 0; i < n; i++)
		cin >> a[i];
	search(a, 0, 0, n - 1, x);
	return 0;
}