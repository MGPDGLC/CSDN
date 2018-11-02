#include<iostream>
using namespace std;
int P(int n, int x);
int main()
{
	int n, x;
	cout << "ÇëÊäÈë:";//ÊäÈën
	cin >> n;
	cout << "ÇëÊäÈë:";//ÊäÈëx
	cin >> x;
	cout << P(n, x);
	return 0;
}
int P(int n, int x)
{
	if (n == 0)
		return 1;
	if (n == 1)
		return x;
	if (n > 1)
		return ((2 * n - 1)*x*P(n - 1, x) - (n - 1)*P(n - 2, x)) / n;
}