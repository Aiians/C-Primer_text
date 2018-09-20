#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 练习3.6 P86
//int main()
//{
//	string s("Hello World!!!");
//	for (auto &c : s)
//		c = 'X';
//	cout << s << endl;
//	system("pause");
//	return 0;
//}


// 练习3.7 P86 如上

// 练习3.8 P86
// 传统for循环
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

// while循环
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


// 练习3.9 P86
// 不合法，因为字符串S是一个空字符串，第一个元素是未知的，引用非法。


// 练习3.10 P86
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


// 练习3.11 P86
//for循环体不看后面花括号的内容，肯定是合法的，但是如果在for循环中花括号中给C赋值，修改C的值，那么此时的for语句肯定是不合法的。C的类型是const char& 。


// 练习3.12 P90
//	a:正确，创建了一个元素为vector的vector对象
//
//	b : 不正确，类型不一致
//
//	c : 正确，十个“null”对象


// 练习3.13 P90
	//a:空vector

	//b : 10个初始值为0的int对象

	//c : 10个初始值为42的int对象

	//d : 1个初始值为10的int对象

	//e : 2个初始值为10、42的int对象

	//f : 10个字符串，初始化为“ ”（空）

	//g : 10个字符串，初始化为“hi”


// 练习3.14 P91
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


// 练习3.15 P91
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


// 练习3.17 P94
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


// 练习3.18 P94
//不合法，空vector，给第一个元素赋值是错误的。
//
//可以给vector定义一个大小即可。


// 练习3.19 P94
//vector<int> i1{ 42,42,42,42,42,42,42,42,42,42 };
//vector<int> i2(10, 42);   //最好
//vector<int> i3 = i2;


// 练习3.20 P94
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


// 改写
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