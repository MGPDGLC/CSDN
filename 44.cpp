#include<iostream>
using namespace std;
int search(int a[], int low, int mid, int high, int x)
{
	while (low <= high)
	{
		mid = low + (high - low) / 2;//�۰�
		if (a[mid] > x)//��ǰ�����Ѱ��
			high = mid - 1;
		else if (a[mid] < x)//�Ӻ�����Ѱ��
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
	cout << "������:";//�������鳤��
	cin >> n;
	cout << "������:";//����Ҫ���ҵ���
	cin >> x;
	cout << "������:";//������������
	for (i = 0; i < n; i++)
		cin >> a[i];
	search(a, 0, 0, n - 1, x);
	return 0;
}