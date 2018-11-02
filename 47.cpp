#include<iostream>
using namespace std;
void fun(int n);
int main()
{
	int n;
	cin >> n;
	fun(n);
	return 0;
}
void fun(int n)
{
	int i, j, k = 1, m = 0;
	for (i = 1; i <= n; i++)
	{
			k *= i;
			m += k;
	}
	cout << m;
}