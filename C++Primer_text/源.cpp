#include <iostream>
#include <string>
using namespace std;

// ��ϰ3.6 P86
//int main()
//{
//	string s("Hello World!!!");
//	for (auto &c : s)
//		c = 'X';
//	cout << s << endl;
//	system("pause");
//	return 0;
//}


// ��ϰ3.7 P86 ����

// ��ϰ3.8 P86
// ��ͳforѭ��
//int main()
//{
//	string s("Hello World!!!");
//	decltype(s.size()) num = s.size();
//	for (decltype(s.size()) i = 0; i < num; ++i)
//		s[i] = 'X';
//	cout << s << endl;
//	system("pause");
//	return 0;
//}

// whileѭ��
//int main()
//{
//	string s("Hello World!!!");
//	decltype(s.size()) num = s.size(), i = 0;
//	while (i < num)
//	{
//		s[i] = 'X';
//		++i;
//	}
//	cout << s << endl;
//	system("pause");
//	return 0;
//}


// ��ϰ3.9 P86
// ���Ϸ�����Ϊ�ַ���S��һ�����ַ�������һ��Ԫ����δ֪�ģ����÷Ƿ���


// ��ϰ3.10 P86
//int main()
//{
//	string s("Hello World!!!");
//	for (auto c : s)
//		if (!ispunct(c))
//			cout << c;
//	cout << endl;
//	system("pause");
//	return 0;
//}


// ��ϰ3.11 P86
//forѭ���岻�����滨���ŵ����ݣ��϶��ǺϷ��ģ����������forѭ���л������и�C��ֵ���޸�C��ֵ����ô��ʱ��for���϶��ǲ��Ϸ��ġ�C��������const char& ��


// ��ϰ3.12 P90
//	a:��ȷ��������һ��Ԫ��Ϊvector��vector����
//
//	b : ����ȷ�����Ͳ�һ��
//
//	c : ��ȷ��ʮ����null������


// ��ϰ3.13 P90
	//a:��vector

	//b : 10����ʼֵΪ0��int����

	//c : 10����ʼֵΪ42��int����

	//d : 1����ʼֵΪ10��int����

	//e : 2����ʼֵΪ10��42��int����

	//f : 10���ַ�������ʼ��Ϊ�� �����գ�

	//g : 10���ַ�������ʼ��Ϊ��hi��