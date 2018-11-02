#include<iostream>
using namespace std;
void fun(int x, int y, int z);
int main()
{
	int x, y, z;
	cin >> x >> y >> z;
	fun(x, y, z);
	return 0;
}
void fun(int x, int y, int z)
{
	int i, j, k=1;
	int n = 0;
	for (i = 2000; i <= x; i++)
	{
		for (j = 1; j <= 12; j++)
		{
			if (i == x && j == y)
			{
				n += z;
				break;
			}
			else
			{
				if (j == 1 || j == 3 || j == 5 || j == 7 || j == 8 || j == 10 || j == 12)
					n += 31;
				else if (j == 4 || j == 6 || j == 9 || j == 11)
					n += 30;
				else
				{
					n += 28;
					if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
						n += 1;
				}
			}
		}
	}
	cout << n;
}