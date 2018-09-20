#include <iostream>
#include <string>
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