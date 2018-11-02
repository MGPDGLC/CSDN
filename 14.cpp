#include<iostream>
using namespace std;
int main()
{
	double x, y;
	cout<<"请输入用电度数:\n";
	cin>>x;
	if(x<=50)
	{
		y=0.5*x;
		cout<<"电费为"<<y<<endl;
	}
	else if(x<=100)
	{
		y=0.5*50+(x-50)*0.7;
	    cout<<"电费为"<<y<<endl;
	}
	else
	{
		y=0.5*50+50*0.7+(x-100);
	    cout<<"电费为"<<y<<endl;
	}
        system("pause");
	return 0;
}