#include<iostream>
#include<cmath>
using namespace std;
bool prime(int n);
int main()
{
	int n;
	cin >> n;
	if (prime(n) == 0)
		cout << "No,it isn¡¯t.";
	if (prime(n) == 1)
		cout << "Yes,it is.";
	return 0;
}
bool prime(int n)
{
	if (n <= 1)
		return false;
	int b = sqrt(double(n));
	int i;
	for (i = 2; i <= b; i++)
		if (n%i == 0)
			break;
	if (i >= b + 1)
		return true;
	else
		return false;
}

