#include<iostream>
using namespace std;
int main()
{
	int c[50] = {0, 1, 1};
	int i, n;
	cout << "ÇëÊäÈë:";
	cin >> n;
    for(i = 3;i < n; i++)
	{
		c[i] = c[i - 1] + c[i - 2] + c[i - 3];
	}
	for (i = 0; i < n; i++)
	{
		cout << c[i] << endl;
	}
	system("pause");
	return 0;
}