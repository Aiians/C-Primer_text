#include <iostream>
#include <string>
#include <vector>
#include <cstring>
using namespace std;
using std::string;
using std::vector;


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


// ��ϰ3.22 P99
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


// ��ϰ3.23 P99
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


// ��ϰ3.24 P101
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


// ��ϰ3.25 P101
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


// ��ϰ3.26 P101
//��Ϊendָ�������һ��Ԫ�صĺ�һ��λ�ã�����


// ��ϰ3.27 P103
//��a�� �Ƿ���buf_size ���ǳ������ʽ��
//��b�� �Ϸ���
//��c�� ��txt_size()��constexprʱ��ȷ���������
//��d�� ����û�пɴ�ſ��ַ���


// ��ϰ3.28 P103
//sa����Ϊ�գ�null����
//ia���麬��10����������Ϊ0.
//sa2�����ֵ��δ�����
//ia2���麬��10��������ֵδ���塣
//
//ȫ�ֱ�������ʼ��Ϊnull��0.
//�ֲ�������ֵ��δ����ġ�


// ��ϰ3.29 P103
//�����vector��˵��
//��1�� ����ĳ�ʼ�����������ṩһ���������ʽ��
//��2�� ����������޷���̬�ı�


// ��ϰ3.30 P104
//���ʷǷ��ڴ�����ia[10]δ���塣�����С��10������Ӧ��Ϊ0~9.


// ��ϰ3.31 P104
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


// ��ϰ3.32 P104
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


// vector��
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


// ��ϰ3.33 P104
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


// ���н��
//D:\labs > prog1
//	3
//	5
//	^ Z
//	4199104
//	4200976
//	6422296
//	1983763024
//	4294967294



// ��ϰ3.34 P108
//p1 += p2 - p1
//������ʹp1ָ��Ŀǰ��ָԪ�صĺ��p2 - p1��Ԫ�ء�ֻ�е�p1�ǳ���ָ��ʱ�ŷǷ���


// ��ϰ3.35 P108
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


// ��ϰ3.36 P108
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



// ��ϰ3.37 P110
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

// ����������ca��C����ַ�������û�ַ���û�и��ſ��ַ���'\0'�������Ի���� hello��ָ�������
// ca���ڴ��е�λ�ò�����ǰѰ�ң�ֱ���������ַ���ͣ������


// ��ϰ3.38 P110
//ָ��ָ�����Ƕ���ĵ�ַ������ǵ�ַ��ӣ��������ֵ���ʲô���塣


// ��ϰ3.39 P110
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



// ��ϰ3.40 P110
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



// ��ϰ3.41 P112
//int main()
//{
//	int a[] = { 0,1,2,3,4,5 };
//	vector<int> ivec(begin(a), end(a));
//	for (auto i : ivec)
//		cout << "ivec[" << i << "]" << "=" << ivec[i] << endl;
//	system("pause");
//	return 0;
//}



// ��ϰ3.42 P112
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



// ��ϰ3.43 P116
// �汾1����Χfor
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


// �汾2����ͨfor + �±������
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


// �汾3����ͨfor + ָ��
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



// ��ϰ3.44 P116
//constexpr size_t rowCnt = 3, colCnt = 4;
//using int_array = int[colCnt];

// ��Χfor
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


// ��ͨfor + �±������
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


// ��ͨfor + ָ��
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



// ��ϰ3.45 P116
// �汾1����Χfor
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


// �汾2����ͨfor + �±������
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


// �汾3����ͨfor + ָ��
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



// ��ϰ4.1 P123
// ֵΪ105


// ��ϰ4.2 P123
// (a) *(vec.begin())   (b) *(vec.begin() + 1)



// ��ϰ4.4 P126
//int main()
//{
//	int i = 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2;
//	cout << i << endl;
//	system("pause");
//	return 0;
//}

//ֵΪ91



// ��ϰ4.5 P126
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



// ��ϰ4.6 P126
//int main()
//{
//	int i = 0;
//	while (cin >> i)
//		if (i % 2)
//			cout << "����" << endl;
//		else
//			cout << "ż��" << endl;
//	system("pause");
//	return 0;
// }



// ��ϰ4.7 P126
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



// ��ϰ4.8 P128
//��������ȼ��ɸߵ������У� == �� && �� || ������������ȼ�����ֵ����⡣



// ��ϰ4.9 P128
//const char *cp = "Hello World";
//if (cp && *cp)
//
//if()��ı��ʽ��ֵ��0��Ϊ�档����߼��루&&����߱�ʾ���ǣ�cp������ַ����ĵ�ַ��Ϊ�գ�Ϊ�档�ұ߱�ʾ���ǣ�*cp��ʾָ��ָ���ַ���
//�׵�ַ��Ԫ�ؼ��ַ���H����ҲΪ�档���if()Ϊ�档



// ��ϰ4.10 P128
//int main()
//{
//	int i;
//	while (cin >> i && i != 42)
//		cout << i << endl;
//	system("pause");
//	return 0;
//}



// ��ϰ4.11 P128
//if (a > b && b > c && c > d)


// ��ϰ4.12 P128
//����� < �����ȼ����� �� = ��˱��ʽ�Ƚ���j < k�ıȽϣ�j С��kΪ��ʱ��� j < k�Ľ��1 ��ʱ�����ʽΪ I != 1Ϊ�棻��j ����kʱ��
//��ʱj < k�Ľ��Ϊ0 ����ʱ���ʽ�൱��i != 0 ʱΪ�档



// ��ϰ4.13 P131
//(a)d = 3.0, i = 3; (b)i = 3, d = 3.5;


// ��ϰ4.14 P131
//if (42 = i)  ��������ֵΪ��ֵ��
//if (i = 42)  42��ֵ��i����0�ж�Ϊ�档


// ��ϰ4.15 P131
//ָ�����Ͳ���ת����������
//double dval; int ival; int *pi;
//dval = ival = *pi = 0;



// ��ϰ4.16 P131
//(a) if (p = getPtr() != 0)  �Ƚ��������=�����������getPtr�����ķ���ֵ��0���ȽϽ��������ٽ��Բ���ֵ����ʽ��ֵ��p��
//��Ϊ if((p = getPtr()) != 0)
//
//(b) if (i = 1024)   ��1024��ֵ��i��i��Ϊ0������Ϊ�档
//��Ϊ if (i == 1024)



// ��ϰ4.17 P133
//ǰ�õĵ����������������ã����õĵ�������������ú��㡣K



// ��ϰ4.18 P133
//��ô���������ڶ���Ԫ�أ�ֱ�����һ��Ԫ�صĺ�һ��λ�ã�δ֪�������ǳ�Σ�գ�


// ��ϰ4.19 P133
//(a)��(*ptr != 0) && (*ptr++)  �ж�ptrָ��ָ���intֵ�Ƿ�Ϊ0
//(b)���ж�ival��ival + 1����ֵ�Ƿ񶼷�0
//(c)����Ϊ��ֵ˳��һ����123ҳ�����Ի����δ������Ϊ��vec[ival] <= vec[ival + 1];