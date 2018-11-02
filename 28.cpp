#include<iostream>
using namespace std;
#define f(x) (x)*(x)*(x)
int main()
{
	for (int i = 100; i < 1000; i++)
		if (f(i % 10) + f(i / 10 % 10) + f(i / 100 % 10) == i)
			cout << i << endl;
	system("pause");
	return 0;
}