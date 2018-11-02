#include<iostream>
using namespace std;
int main()
{
	double k=1, m=0, n;
	cout<<"请输入n:"<<endl;
	cin>>n;
	if(n<=0||n>=10)
	{
	cout<<"error"<<endl;
	system("pause");
	return 0;
    }
    while(m <= n)
    {
    	m+=1/k;
    	k++;
    }
	cout<<"最小正整数k为"<<k-1<<endl;
	system("pause");
	return 0;
}
