#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1, str2;
	int a[500], b[500], c[500];
	int i, len;
	memset(a, 0, sizeof(a));						//��ʼ��
	memset(b, 0, sizeof(b));
	memset(c, 0, sizeof(c));
	cin >> str1 >> str2;							//�����ַ���
	a[0] = str1.length();							//��ȡ�ַ�������
	for (i = 1; i <= a[0]; i++)						
		a[i] = str1[a[0] - i] - '0';				//����ת��Ϊ������ŵ�������
	b[0] = str2.length();
	for (i = 1; i <= b[0]; i++)
		b[i] = str2[b[0] - i] - '0';
	len = (a[0] > b[0] ? a[0] : b[0]);				//ȡ�����ַ�����󳤶�
	for (i = 1; i <= len; i++)						
	{												
		c[i] += a[i] + b[i];						//��λ���ӷ�
		c[i + 1] = c[i] / 10;						//ͬʱ��λ����
		c[i] %= 10;
	}
	len++;											//��󳤶ȼ�һλ
	while (c[len] == 0 && (len > 1))				//��Ϊ��
		len--;										//��ȥ��
	for (i = len; i >= 1; i--)
		cout << c[i];
	return 0;
}