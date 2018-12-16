#include<iostream>
using namespace std;
int main()
{
	int n;
	int a = 1, b = 2;
	cin >> n;
	while (n != 0)
	{
		if (n & 1 != 0)
			a *= b;
		b *= b;
		n >>= 1;
	}
	cout << a;
	return 0;
}