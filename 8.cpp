#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"ÇëÊäÈëÄê·İ:"<<endl;
	cin>>year;
	if ((year%4==0&&year%100!=0)||year%400==0)
		{
			cout<<"Yes"<<endl;
	    }
	else
	    {	
		    cout<<"No"<<endl;
	    }
	system("pause");
	return 0;
}
