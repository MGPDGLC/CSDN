#include<iostream>
#include<string>
using namespace std;
bool confer(string str1, string str2)				//�Ƚϴ�С
{
	if (str1.length() > str2.length())				//�Ƚϳ���
		return true;
	if (str1.length() < str2.length())
		return false;
	for (int i = 0; i <= str1.length(); i++)		//�������,��λ�Ƚ�
	{
		if (str1[i] > str2[i])
			return true;
		if (str2[i] < str2[i])
			return false;
	}
	return true;										//�������,ÿλ��ȣ��������
}
void jf(int a[], int b[], int c[])
{
	int i;
	for (i = 1; i <= a[0]; i++)
		c[i] = a[i];									//��a������λ�����Ƶ�c
	c[0] = a[0];										//c��λ���ݵ���a��λ��
	for (i = 1; i <= b[0]; i++)
	{
		if (c[i] < b[i])								
		{
			c[i + 1]--;									//��λ��һ
			c[i] += 10;									//��λ
		}
		c[i] -= b[i];									//���
	}
	for (i = 1; i < c[0]; i++)
	{
		if (c[i] < 0)
		{
			c[i + 1]--;
			c[i] += 10;
		}
	}
	if (i < c[0])										//��Чλ�� a[0]-b[0] >= 2
		return;											
	else												//��Чλ�� == 1 or 0
	{
		while (c[i] == 0 && i >= 1)
			i--;
		c[0] = (i == 0) ? 1 : i;
	}
	return;
}
int main()
{
	string str1, str2;
	int a[500], b[500], c[500];
	int i;
	memset(a, 0, sizeof(a));						//��ʼ��
	memset(b, 0, sizeof(b));
	memset(c, 0, sizeof(c));
	cin >> str1 >> str2;							//�����ַ���
	a[0] = str1.length();							//��ȡ�ַ�������
	for (i = 1; i <= a[0]; i++)
		a[i] = str1[a[0] - i] - '0';				//����ת��Ϊ������ŵ�������
	b[0] = str2.length();
	for (i = 1; i <= b[0]; i++)						//������
		b[i] = str2[b[0] - i] - '0';
	if (confer(str1, str2))							//a[] > b[]
		jf(a, b, c);
	else											//b[] > a[]
		jf(b, a, c);
	for (i = c[0]; i >= 1; i--)							//���
		cout << c[i];
	return 0;
}