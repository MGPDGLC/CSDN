#include<iostream>
using namespace std;
long fun(int n);
int main()
{
	int n;
	cin >> n;
	fun(n);
	cout << fun(n);
	return 0;
}
long fun(int n)
{
	long c;
	if (n == 1)
		c = 1;
	else c = n * fun(n - 1);
	return c;
}