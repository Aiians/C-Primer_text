#include <iostream>
#include <string>
#include <vector>
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


// ��ϰ3.14 P91
//int main()
//{
//	vector<int> My_vector;
//	int My_int;
//	while (cin >> My_int)
//		My_vector.push_back(My_int);
//	for (decltype(My_vector.size()) i = 0; i < My_vector.size(); ++i)
//		cout << My_vector[i] << '\t';
//	cout << endl;
//	system("pause");
//	return 0;
//}


// ��ϰ3.15 P91
//int main()
//{
//	vector<string> My_vector;
//	string My_string;
//	while (cin >> My_string)
//		My_vector.push_back(My_string);
//	for (decltype(My_vector.size()) i = 0; i < My_vector.size(); ++i)
//		cout << My_vector[i] << '\t';
//	cout << endl;
//	system("pause");
//	return 0;
//}


// ��ϰ3.17 P94
//int main()
//{
//	vector<string> My_vector;
//	string My_string;
//	while (cin >> My_string)
//		My_vector.push_back(My_string);
//	for (decltype(My_vector.size()) i = 0; i < My_vector.size(); ++i)
//		for (decltype(My_vector[i].length()) j = 0; j < My_vector[i].length(); ++j)
//			My_vector[i][j] = toupper(My_vector[i][j]);
//	for (decltype(My_vector.size()) i = 0; i < My_vector.size(); ++i)
//		cout << My_vector[i] << endl;
//	system("pause");
//	return 0;
//}


// ��ϰ3.18 P94
//���Ϸ�����vector������һ��Ԫ�ظ�ֵ�Ǵ���ġ�
//
//���Ը�vector����һ����С���ɡ�


// ��ϰ3.19 P94
//vector<int> i1{ 42,42,42,42,42,42,42,42,42,42 };
//vector<int> i2(10, 42);   //���
//vector<int> i3 = i2;


// ��ϰ3.20 P94
//int main()
//{
//	vector<int> My_vector, Sum_vector;
//	int a[4];
//	for (auto &i : a)
//		cin >> i;
//	for (int i = 0; i < 4; ++i)
//		My_vector.push_back(a[i]);
//	for (decltype(My_vector.size()) k = 0; k < My_vector.size() - 1; ++k)
//		Sum_vector.push_back(My_vector[k] + My_vector[k + 1]);
//	for (decltype(Sum_vector.size()) i = 0; i < Sum_vector.size(); ++i)
//		cout << Sum_vector[i] << endl;
//	system("pause");
//	return 0;
//}


// ��д
//int main()
//{
//	vector<int> My_vector, Sum_vector;
//	int a[4];
//	for (auto &i : a)
//		cin >> i;
//	for (int i = 0; i < 4; ++i)
//		My_vector.push_back(a[i]);
//	for (decltype(My_vector.size()) k = 0, j = My_vector.size() - 1; k < My_vector.size() - 1; ++k)
//	{
//		if (k < j - k)
//			Sum_vector.push_back(My_vector[k] + My_vector[j - k]);
//	}
//	for (decltype(Sum_vector.size()) i = 0; i < Sum_vector.size(); ++i)
//		cout << Sum_vector[i] << endl;
//	system("pause");
//	return 0;
//}