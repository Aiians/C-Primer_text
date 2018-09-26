#include <iostream>
#include <string>
#include <vector>
#include <cstring>
using namespace std;
using std::string;
using std::vector;


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


// 练习3.22 P99
//int main()
//{
//	
//	string text("This is an example,"
//		"in order to write this program, "
//		"an example of it, in order to achieve "
//		"the first section are rewritten into "
//		"uppercase letters, and then output it.");
//	for (auto it = text.begin(); it != text.end(); ++it)
//		*it = toupper(*it);
//	cout << text << endl;
//	system("pause");
//	return 0;
//
//}


// 练习3.23 P99
//int main()
//{
//	vector<int> text(10, 5);
//	for (auto it = text.begin(); it != text.end(); ++it)
//	{
//		*it = 2 * (*it);
//		cout << *it << " ";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}


// 练习3.24 P101
//int main()
//{
//	vector<int> text(4);
//	for (int i = 0; i < 4; ++i)
//		cin >> text[i];
//	for (auto vector_begin = text.begin(), vector_end = text.end(); vector_begin != vector_end; ++vector_begin)
//	{
//		--vector_end;
//		cout << *vector_begin + *vector_end << endl;
//	}
//	system("pause");
//	return 0;
//
//}


// 练习3.25 P101
//int main()
//{
//	vector<unsigned> scores(11, 0);
//	unsigned grade;
//	while (cin >> grade)
//	{
//		auto it = scores.begin();
//		unsigned n = grade / 10;
//		it += n;
//		++(*it);
//	}
//	for (decltype(scores.size()) i = 0; i < scores.size() - 1; ++i)
//	{
//		cout << i * 10 << "~" << i * 10 + 9 << "\t"
//			<< scores[i] << endl;
//	}
//	cout << 100 << "\t" << scores[10] << endl;
//	system("pause");
//	return 0;
//}


// 练习3.26 P101
//因为end指的是最后一个元素的后一个位置！！！


// 练习3.27 P103
//（a） 非法，buf_size 不是常量表达式。
//（b） 合法。
//（c） 当txt_size()是constexpr时正确；否则错误。
//（d） 错误：没有可存放空字符。


// 练习3.28 P103
//sa数组为空（null）。
//ia数组含有10个整数，皆为0.
//sa2数组的值是未定义的
//ia2数组含有10个整数。值未定义。
//
//全局变量被初始化为null或0.
//局部变量的值是未定义的。


// 练习3.29 P103
//相对于vector来说：
//（1） 数组的初始化不灵活（必须提供一个常量表达式）
//（2） 数组的容量无法动态改变


// 练习3.30 P104
//访问非法内存区域，ia[10]未定义。数组大小是10，索引应该为0~9.


// 练习3.31 P104
//int main()
//{
//	int arr[10];
//	for (int i = 0; i < 10; ++i)
//	{
//		arr[i] = i;
//		cout << "arr[" << i << "]" << " = " << arr[i] << endl;
//	}
//	system("pause");
//	return 0;
//}


// 练习3.32 P104
//int main()
//{
//	int arr[10];
//	for (int i = 0; i < 10; ++i)
//	{
//		arr[i] = i;
//		cout << "arr[" << i << "]" << " = " << arr[i] << endl;
//	}
//	int arr2[10];
//	for (int i = 0; i < 10; ++i)
//	{
//		arr2[i] = arr[i];
//		cout << "arr2[" << i << "]" << " = " << arr2[i] << endl;
//	}
//	system("pause");
//	return 0;
//}


// vector版
//int main()
//{
//	vector<int> ivec;
//	for (int i = 0; i < 10; ++i)
//		ivec.push_back(i);
//	vector<int> ivec2;
//	ivec2 = ivec;
//	for (auto i : ivec)
//		cout << "ivec[" << i << "]" << "=" << ivec[i] << endl;
//	for (auto i : ivec2)
//		cout << "ivec2[" << i << "]" << "=" << ivec2[i] << endl;
//	system("pause");
//	return 0;
//}


// 练习3.33 P104
//int main()
//{
//	unsigned scores[11];
//	unsigned grade;
//	while (cin >> grade) {
//		if (grade <= 100) {
//			++scores[grade / 10];
//		}
//	}
//	for (auto x : scores) {
//		std::cout << x << std::endl;
//	}
//	system("pause");
//	return 0;
//}


// 运行结果
//D:\labs > prog1
//	3
//	5
//	^ Z
//	4199104
//	4200976
//	6422296
//	1983763024
//	4294967294



// 练习3.34 P108
//p1 += p2 - p1
//功能是使p1指向目前所指元素的后第p2 - p1个元素。只有当p1是常量指针时才非法。


// 练习3.35 P108
//int main()
//{
//	constexpr size_t i = 5;
//	int arr[i] = { 1,2,3,4,5 };
//	for (int *p = begin(arr); p != begin(arr) + i; ++p)
//		*p = 0;
//	for (auto i : arr)
//		cout << "arr[" << i << "]" << "=" << arr[i] << endl;
//	system("pause");
//	return 0;
//}


// 练习3.36 P108
//int main()
//{
//	unsigned p = 0, q = 0;
//	constexpr size_t i = 5;
//	int arr[i] = { 1,2,3,4,5 }, arr2[i] = { 2,3,4,5,6 };
//	if (sizeof(arr) == sizeof(arr2))
//		for (size_t t = 0; t != i; ++t)
//			if (arr[t] == arr2[t])
//				++p;
//			else
//				p = 0;
//	else
//		cout << "arrays are not equal!" << endl;
//	if (p == i)
//		cout << "arrays are equal!" << endl;
//	else
//		cout << "arrays are not equal!" << endl;
//
//	vector<int> p1{ 1,2,3,4,5 }, p2{ 2,3,4,5,6 };
//	if (p1.size() != p2.size())
//		cout << "vectors are not equal!" << endl;
//	else
//	{
//		auto ip1 = p1.begin(), ip2 = p2.begin();
//		for (decltype(p1.size()) i = 0; i != p1.size(); ++i)
//		{
//			if (*(ip1++) != *(ip2++))
//				++q;
//		}
//
//	}
//	if (q != 0)
//		cout << "vectors are not equal!" << endl;
//	else
//		cout << "vectors are equal!" << endl;
//	system("pause");
//	return 0;
//}



// 练习3.37 P110
//int main()
//{
//	const char ca[] = { 'h','e','l','l','o' };
//	const char *cp = ca;
//	while (*cp)
//	{
//		cout << *cp << endl;
//		++cp;
//	}
//	system("pause");
//	return 0;
//}

// 输出结果由于ca是C风格字符串，但没字符串没有跟着空字符（'\0'），所以会输出 hello后指针辉沿着
// ca在内存中的位置不断向前寻找，直到遇到空字符才停下来。


// 练习3.38 P110
//指针指代的是对象的地址，相加是地址相加，难以区分到底什么意义。


// 练习3.39 P110
//int main()
//{
//	string s1 = "string-A", s2 = "string-B";
//	cout << "The big string is:";
//	if (s1 < s2)
//		cout << s2 << endl;
//	else
//		cout << s1 << endl;
//
//
//	const char ca1[] = "ca-A", ca2[] = "ca-B";
//	cout << "The big C-style character string is:";
//	if (strcmp(ca1, ca2) < 0)
//		cout << "ca-B" << endl;
//	else
//		cout << "ca-A" << endl;
//	system("pause");
//	return 0;
//}



// 练习3.40 P110
//int main()
//{
//	char ca[20] = "stringA", ca2[20] = "stringB";
//	strcat(ca, ca2);
//	char ca3[20];
//	strcpy(ca3, ca);
//	cout << ca3 << endl;
//	system("pause");
//	return 0;
//}