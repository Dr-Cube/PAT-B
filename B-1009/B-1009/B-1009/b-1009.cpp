/*����һ��Ӣ�Ҫ�����д���򣬽��������е��ʵ�˳��ߵ������
�����ʽ�������������һ��������������һ���ڸ����ܳ��Ȳ�����80���ַ�����
�ַ��������ɵ��ʺ����ɿո���ɣ����е�������Ӣ����ĸ����Сд�����֣���ɵ��ַ�����
����֮����1���ո�ֿ������뱣֤����ĩβû�ж���Ŀո�
�����ʽ��ÿ���������������ռһ�У���������ľ��ӡ�*/

#include<stdio.h>
#include<iostream>
#include<ctype.h>
#include<string>
#include<vector>
using namespace std;
using std::vector;

int main()
{
	string word;
	vector<string> words;
	do
	{
		cin >> word;
		words.push_back(word);
	} while (getchar() != '\n');
	/*while (getchar() != '\n')
	{
		cin >> word;
		words.push_back(word);
	}*/
	int s = words.size();
	for (int i = s-1; i >= 1; i--)
	{
		cout << words[i]<<' ';
	}
	cout << words[0];
	


	system("pause");
	return 0;
}