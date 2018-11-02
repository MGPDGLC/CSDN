#include<iostream>
using namespace std;
int main()
{
	int m, n, o;
	cout<<"ÇëÊäÈën:"<<endl;
	cin>>n;
	for(m = 1; m <= n ;m++)
	{
		for(o = n; o >= m ; o--)
			cout<<"*";
		    cout<<endl;
	}
	system("pause");
	return 0;
}