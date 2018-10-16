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



// 练习3.41 P112
//int main()
//{
//	int a[] = { 0,1,2,3,4,5 };
//	vector<int> ivec(begin(a), end(a));
//	for (auto i : ivec)
//		cout << "ivec[" << i << "]" << "=" << ivec[i] << endl;
//	system("pause");
//	return 0;
//}



// 练习3.42 P112
//int main()
//{
//	vector<int> ivec(10, 1);
//	int a[10] = {};
//	for (auto i : ivec)
//	{
//		a[i] = ivec[i];
//		cout << "a[" << i << "]" << "=" << a[i] << endl;
//	}
//	system("pause");
//	return 0;
//}



// 练习3.43 P116
// 版本1，范围for
//int main()
//{
//	constexpr size_t rowCnt = 3, colCnt = 4;
//	int ia[rowCnt][colCnt] = { { 0 }, { 1 }, { 2 } };
//	for (int(&row)[colCnt] : ia)
//	{
//		for (int col : row)
//			cout << col << " ";
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}


// 版本2，普通for + 下标运算符
//int main()
//{
//	constexpr size_t rowCnt = 3, colCnt = 4;
//	int ia[rowCnt][colCnt] = { { 0 }, { 1 }, { 2 } };
//	for (size_t i = 0; i != rowCnt; ++i)
//	{
//		for (size_t j = 0; j != colCnt; ++j)
//			cout << ia[i][j] << " ";
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}


// 版本3，普通for + 指针
//int main()
//{
//	constexpr size_t rowCnt = 3, colCnt = 4;
//	int ia[rowCnt][colCnt] = { { 0 }, { 1 }, { 2 } };
//	for (int(*p)[colCnt] = begin(ia); p != end(ia); ++p)
//	{
//		for (int *q = begin(*p); q != end(*p); ++q)
//			cout << *q << " ";
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}



// 练习3.44 P116
//constexpr size_t rowCnt = 3, colCnt = 4;
//using int_array = int[colCnt];

// 范围for
//int main()
//{
//	int ia[rowCnt][colCnt] = { { 0 }, { 1 }, { 2 } };
//	for (int_array &row : ia)
//	{
//		for (int col : row)
//			cout << col << " ";
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}


// 普通for + 下标运算符
//int main()
//{
//	int ia[rowCnt][colCnt] = { { 0 }, { 1 }, { 2 } };
//	for (size_t i = 0; i != rowCnt; ++i)
//	{
//		for (size_t j = 0; j != colCnt; ++j)
//			cout << ia[i][j] << " ";
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}


// 普通for + 指针
//int main()
//{
//	int ia[rowCnt][colCnt] = { { 0 }, { 1 }, { 2 } };
//	for (int_array *p = begin(ia); p != end(ia); ++p)
//	{
//		for (int *q = begin(*p); q != end(*p); ++q)
//			cout << *q << " ";
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}



// 练习3.45 P116
// 版本1，范围for
//int main()
//{
//	constexpr size_t rowCnt = 3, colCnt = 4;
//	int ia[rowCnt][colCnt] = { { 0 }, { 1 }, { 2 } };
//	for (auto &row : ia)
//	{
//		for (auto col : row)
//			cout << col << " ";
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}


// 版本2，普通for + 下标运算符
//int main()
//{
//	constexpr size_t rowCnt = 3, colCnt = 4;
//	int ia[rowCnt][colCnt] = { { 0 }, { 1 }, { 2 } };
//	for (auto i = 0; i != rowCnt; ++i)
//	{
//		for (auto j = 0; j != colCnt; ++j)
//			cout << ia[i][j] << " ";
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}


// 版本3，普通for + 指针
//int main()
//{
//	constexpr size_t rowCnt = 3, colCnt = 4;
//	int ia[rowCnt][colCnt] = { { 0 }, { 1 }, { 2 } };
//	for (auto p = begin(ia); p != end(ia); ++p)
//	{
//		for (auto q = begin(*p); q != end(*p); ++q)
//			cout << *q << " ";
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}



// 练习4.1 P123
// 值为105


// 练习4.2 P123
// (a) *(vec.begin())   (b) *(vec.begin() + 1)



// 练习4.4 P126
//int main()
//{
//	int i = 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2;
//	cout << i << endl;
//	system("pause");
//	return 0;
//}

//值为91



// 练习4.5 P126
//int main()
//{
//	int a = -30 * 3 + 21 / 5;
//	int b = -30 + 3 * 21 / 5;
//	int c = 30 / 3 * 21 % 5;
//	int d = -30 / 3 * 21 % 4;
//	cout << a << " " << b << " "
//		<< c << " " << d << endl;
//	system("pause");
//	return 0;
//}
//
//-86 - 18 0 - 2



// 练习4.6 P126
//int main()
//{
//	int i = 0;
//	while (cin >> i)
//		if (i % 2)
//			cout << "奇数" << endl;
//		else
//			cout << "偶数" << endl;
//	system("pause");
//	return 0;
// }



// 练习4.7 P126
//int main()
//{
//	short value = 32767;
//	++value;
//	unsigned short value2 = 0;
//	--value2;
//	unsigned short value3 = 65535;
//	++value3;
//	cout << value << " " << value2
//		<< " " << value3 << endl;
//	system("pause");
//	return 0;
//}
//
//-32768 65535 0



// 练习4.8 P128
//运算符优先级由高到低排列： == ， && ， || ，按照这个优先级进行值的求解。



// 练习4.9 P128
//const char *cp = "Hello World";
//if (cp && *cp)
//
//if()里的表达式，值非0即为真。因此逻辑与（&&）左边表示的是，cp储存的字符串的地址不为空，为真。右边表示的是，*cp表示指针指向字符串
//首地址的元素即字符‘H’，也为真。因此if()为真。



// 练习4.10 P128
//int main()
//{
//	int i;
//	while (cin >> i && i != 42)
//		cout << i << endl;
//	system("pause");
//	return 0;
//}



// 练习4.11 P128
//if (a > b && b > c && c > d)


// 练习4.12 P128
//运算符 < 的优先级高于 ！ = 因此表达式先进行j < k的比较，j 小于k为真时结果 j < k的结果1 此时，表达式为 I != 1为真；当j 大于k时，
//此时j < k的结果为0 ，此时表达式相当于i != 0 时为真。



// 练习4.13 P131
//(a)d = 3.0, i = 3; (b)i = 3, d = 3.5;


// 练习4.14 P131
//if (42 = i)  错误：字面值为右值。
//if (i = 42)  42赋值给i，非0判断为真。


// 练习4.15 P131
//指针类型不能转成整数类型
//double dval; int ival; int *pi;
//dval = ival = *pi = 0;



// 练习4.16 P131
//(a) if (p = getPtr() != 0)  比较运算符！=的运算对象将是getPtr函数的返回值及0，比较结果无论真假将以布尔值的形式赋值给p。
//改为 if((p = getPtr()) != 0)
//
//(b) if (i = 1024)   将1024赋值给i，i不为0，条件为真。
//改为 if (i == 1024)



// 练习4.17 P133
//前置的递增运算符：先算后用，后置的递增运算符：先用后算。K



// 练习4.18 P133
//那么程序会输出第二个元素，直到最后一个元素的后一个位置（未知的量，非常危险）


// 练习4.19 P133
//(a)：(*ptr != 0) && (*ptr++)  判断ptr指针指向的int值是否为0
//(b)：判断ival和ival + 1两个值是否都非0
//(c)：因为求值顺序不一定Ｐ123页，所以会产生未定义行为，vec[ival] <= vec[ival + 1];