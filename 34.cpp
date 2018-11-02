#include <iostream>
using namespace std;
int main()
{
	int d[10] = { 0 }, i, m = 0, n;
	cout << "请输入苹果高度:" << endl;
	for (i = 0; i <= 9; i++)
		cin >> d[i];
	cout << "请输入最大高度:" << endl;
	cin >> n;
	for (i = 0; i <= 9; i++)
	{
		if (d[i] <= n + 30)
			m += 1;
	}
	cout << "能够到的苹果数为:";
	cout << m << endl;
	system("pause");
	return 0;
}