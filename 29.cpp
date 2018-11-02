#include<iostream>
using namespace std;
int main()
{
	int x = 1, y = 1, z = 0, w, n;
	for (w = 0; w <= 2; w++)
	{
		if (w == 1)
			cout << 1 << endl;
		if (w == 2)
			cout << 1 << endl;
	}
	for (n = 3; 1 ; n++);
	{
		z = x + y;
		x = y;
		y = z;
		cout << z << endl;
	}
}