#include <iostream>
using namespace std;
int main()
{
	int d[10] = { 0 }, i, m = 0, n;
	cout << "������ƻ���߶�:" << endl;
	for (i = 0; i <= 9; i++)
		cin >> d[i];
	cout << "���������߶�:" << endl;
	cin >> n;
	for (i = 0; i <= 9; i++)
	{
		if (d[i] <= n + 30)
			m += 1;
	}
	cout << "�ܹ�����ƻ����Ϊ:";
	cout << m << endl;
	system("pause");
	return 0;
}