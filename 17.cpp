#include<iostream>
using namespace std;
int main()
{
	int y, m, flag=0;
	cout<<"请输入年份及月份:"<<endl;
	cin>>y>>m;
	if(m<1||m>12)
		cout<<"错误数据"<<endl;
	if((y% 4 ==0&&y% 100!=0)||y% 400==0)
		flag=1;
	switch(m)
	{
		case 1: 
		case 3: 
		case 5: 
		case 7:
		case 8:
		case 10:
		case 12:
			cout<<"31天"<<endl;break;
		case 4:
		case 6:
		case 9:
		case 11:
			cout<<"30天"<<endl;break;
		case 2:
			if(flag==1)
				cout<<"29天"<<endl;break;
			if(flag==0)
				cout<<"28天"<<endl;break;
	}
	system("pause");
	return 0;
}