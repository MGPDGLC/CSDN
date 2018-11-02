#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"请输入一个整数:"<<endl;
	cin>>n;
	if(n>=1000)
    cout<<"错误数据"<<endl;
	else
	while(n)
	{
		cout<<n%10;
		n/=10;
	}
	system("pause");
	return 0;
}
