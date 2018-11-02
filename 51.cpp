#include<iostream>
#include<string>
using namespace std;
void fun(string str, int a[], int len);
int main()
{
	const int N = 1024;
	int a[N];
	int len;
	string str;
	cout << "ÇëÊäÈë:" << endl;
	cin >> str;
	len = str.length();
	a[0] = len;
	fun(str, a, len);
	return 0;
}
void fun(string str,int a[],int len)
{
	int i;
	for (i = 1; i <= len; i++)
		a[i] = str[a[0] - i] - '0';
	for (i = len; i > 0; i--)
		cout << a[i];
}