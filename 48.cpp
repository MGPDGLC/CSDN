#include<iostream>
#include<cmath>
long double sinh(int x);
using namespace std;
int main()
{
	int x;
	cin >> x;
	cout << sinh(exp(sinh(x)));
	return 0;
}
long double sinh(int x)
{
	return (exp(x) - exp(-x)) / 2;
}