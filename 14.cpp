#include<iostream>
using namespace std;
int main()
{
	double x, y;
	cout<<"�������õ����:\n";
	cin>>x;
	if(x<=50)
	{
		y=0.5*x;
		cout<<"���Ϊ"<<y<<endl;
	}
	else if(x<=100)
	{
		y=0.5*50+(x-50)*0.7;
	    cout<<"���Ϊ"<<y<<endl;
	}
	else
	{
		y=0.5*50+50*0.7+(x-100);
	    cout<<"���Ϊ"<<y<<endl;
	}
        system("pause");
	return 0;
}