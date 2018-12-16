#include<iostream>
#include<string>
using namespace std;
bool confer(string str1, string str2)				//比较大小
{
	if (str1.length() > str2.length())				//比较长度
		return true;
	if (str1.length() < str2.length())
		return false;
	for (int i = 0; i <= str1.length(); i++)		//长度相等,逐位比较
	{
		if (str1[i] > str2[i])
			return true;
		if (str2[i] < str2[i])
			return false;
	}
	return true;										//长度相等,每位相等，两数相等
}
void xf(int a[], int b[], int c[])
{
	int i, j, k;
	for (i = 1; i <= b[0]; i++)
	{
		int jw;
		for (j = 1, jw = 0; j <= a[0]; j++)
		{
			c[i + j - 1] = c[i + j - 1] + a[j] * b[i] + jw;
			jw = c[i + j - 1] / 10;
			c[i + j - 1] %= 10;
		}
		c[i + a[0]] = jw;
	}
	int len=a[0] + b[0];
	while (c[len] == 0 && len > 1)
		len--;
	c[0] = c[len];
	return;
}
int main()
{
	string str1, str2;
	int a[500], b[500], c[500];
	int i;
	memset(a, 0, sizeof(a));						//初始化
	memset(b, 0, sizeof(b));
	memset(c, 0, sizeof(c));
	cin >> str1 >> str2;							//输入字符串
	a[0] = str1.length();							//获取字符串长度
	for (i = 1; i <= a[0]; i++)
		a[i] = str1[a[0] - i] - '0';				//倒序转换为整数存放到数组中
	b[0] = str2.length();
	for (i = 1; i <= b[0]; i++)						//···
		b[i] = str2[b[0] - i] - '0';
	for (i = c[0]; i >= 1; i--)							//输出
		cout << c[i];
	return 0;
}