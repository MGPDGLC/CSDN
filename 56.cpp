#include<iostream>
using namespace std;
void Quicksort(int a[],int low,int high)
{
	int i, j;
	int key;
	if (low >= high)
		return;
	i = low; j = high; key = a[i];
	while (i < j)
	{
		while (i < j&&a[j] >= key)			//从后往前找出比key小的数
			j--;
		a[i] = a[j];						//放到第一个数据	                
		while (i < j&&a[i] <= key)          //从前往后找出比key大的数
			i++;
		a[j] = a[i];                        //放到刚才的数据
	}
	a[i] = key;								//初始化啊a[i]
	Quicksort(a, low, i - 1);				
	Quicksort(a, i + 1, high);
}
int main()
{
	int a[128];
	int k;
	int n;
	cout << "请输入:" << endl;
	cin >> n;
	cout << "请输入:" << endl;
	for (k = 0; k < n; k++)
		cin >> a[k];
	Quicksort(a, 0, n - 1);
	for (k = 0; k < n; k++)
		cout << a[k] << " ";
	return 0;
}