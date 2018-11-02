#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "请输入:" << endl;
	cin >> a >> b;
	if (a < b)
	{
		a = a + b;
		b = a - b;
		a = a - b;
	}
	for (;b != 0;)
	{
		c = a % b;
		a = b;
		b = c;
	}
	cout << "最大公约数为:" << a << endl;
	system("pause");
	return 0;
}