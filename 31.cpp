#include<iostream>
using namespace std;
int main()
{
	int n, m;
	cout<<"ÇëÊäÈë:"<<endl;
	cin>>n;
	int a[47] = {0, 1, 1,};
	for(m = 3; m < n; m++)
	{
		a[m] = a[m - 1] + a[m - 2];
	}
	for(m = 0; m < n; m++)
	{
		cout<<a[m]<<endl;
	}
	system("pause");
	return 0;
}
