#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"������һ������:"<<endl;
	cin>>n;
	if(n>=1000)
    cout<<"��������"<<endl;
	else
	while(n)
	{
		cout<<n%10;
		n/=10;
	}
	system("pause");
	return 0;
}
