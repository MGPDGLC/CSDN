#include<iostream>
using namespace std;
bool leap(int x);
int main()
{
	int x;
	cin >> x;
	if (leap(x))
		cout << "Yes,it is.";
	else
		cout << "No,it isn't.";
	return 0;
}
bool leap(int x)
{
	if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0)
		return true;
	else
		return false;
}