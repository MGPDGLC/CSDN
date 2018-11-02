#include<iostream>
using namespace std;
int main()
{
	int a, b, c, n;
	cout<<"ÇëÊäÈëÊý×Ö:";
	cin>>n;
	for(a = 1; a < n; a++)
	{
		for(b = n; b > a ;b--)
		{
			cout<<" ";
		}
		for(c = 1; c <= 2 * a - 1 ;c++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for(a = n; a > 0; a--)
	{
		for(b = n; b > a ;b--)
		{
			cout<<" ";
		}
		for(c = 1; c <= 2 * a - 1 ;c++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	system("pause");
	return 0;
}



