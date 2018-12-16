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
		while (i < j&&a[j] >= key)			//�Ӻ���ǰ�ҳ���keyС����
			j--;
		a[i] = a[j];						//�ŵ���һ������	                
		while (i < j&&a[i] <= key)          //��ǰ�����ҳ���key�����
			i++;
		a[j] = a[i];                        //�ŵ��ղŵ�����
	}
	a[i] = key;								//��ʼ����a[i]
	Quicksort(a, low, i - 1);				
	Quicksort(a, i + 1, high);
}
int main()
{
	int a[128];
	int k;
	int n;
	cout << "������:" << endl;
	cin >> n;
	cout << "������:" << endl;
	for (k = 0; k < n; k++)
		cin >> a[k];
	Quicksort(a, 0, n - 1);
	for (k = 0; k < n; k++)
		cout << a[k] << " ";
	return 0;
}