#include <iostream>
using namespace std;
#include <string> //C++�ַ���ͷ�ļ�
//ת���ַ�
//int main()
//{
//	cout << "hello world\n";  //  \n :���з�   endl�Դ�����
//	cout << "\\" << endl; //  \\������ַ���\��
//	cout << "abc\thello world" << endl;// \t��ˮƽ�Ʊ��  ���������ַ�
//	cout << "abcabc\thello world" << endl;
//	cout << "a\thello world" << endl;
//	cout << "abc hello world" << endl;// ��\t
//	cout << "abcabc hello world" << endl;
//	cout << "a hello world" << endl;
//	system("pause");
//	return 0;
//}
//�ַ���
//int main()
//{
//	//C�����ַ�����char ������[]="�ַ���ֵ";
//	char arr[] = "hello world";
//	cout << arr << endl;
//
//	//C++�ַ���������һ��ͷ�ļ�<string>
//	string str = "hello world";
//	cout << str << endl;
//	system("pause");
//	return 0;
//}
//�������ͣ��������ٵ�ֵ
//int main()
//{
//	bool flag = true; //������
//	cout << flag << endl;//1
//	flag = false;//�����
//	cout << flag << endl;//0
//	cout << "bool�ռ��С��" << sizeof(bool) << endl; //1�ֽ�
//	system("pause");
//	return 0;
//}
////���ݵ����� : cin >> ������;
//int main()
//{
//	int a = 0;
//	cout << "a=" << a << endl;
//	cout << "����a���¸�ֵ��" ;
//	cin >> a;
//	cout << "a=" << a << endl;
//
//	float f = 3.14f;
//	cout << "f=" << f << endl;
//	cout << "�����ȸ�����f���¸�ֵ��";
//	cin >> f;
//	cout << "f=" << f << endl;
//
//	char ch = 'a';
//	cout << "ch=" << ch << endl;
//	cout << "�ַ���ch���¸�ֵ��";
//	cin >> ch;
//	cout << "ch=" << ch << endl;
//
//	string str = "hello"; //��ͷ�ļ�<string>
//	cout << "str=" << str << endl;
//	cout << "�ַ���str���¸�ֵ��";
//	cin >> str;
//	cout << "str=" << str << endl;
//
//	bool flag = true;
//	cout << "flag" << flag << endl;
//	cout << "��������bool���¸�ֵ��";
//	cin >> flag;
//	cout << "flag=" << flag << endl;
//
//	system("pause");
//	return 0;
//}
////���������
//int main()
//{
//	//�Ӽ��˳�
//	int num1 = 10;
//	int num2 = 4;
//	cout << "num1 + num2 = " << num1 + num2 << endl;
//	cout << "num1 - num2 = " << num1 - num2 << endl;
//	cout << "num1 * num2 = " << num1 * num2 << endl;
//	cout << "num1 / num2 = " << num1 / num2 << endl;//ֻȡ��������
//	//С�����
//	float f1 = 1.25f;
//	float f2 = 0.23f;
//	cout << "f1 / f2 =" << f1 / f2 << endl;
//	cout << "num1 % num2 = " << num1 % num2 << endl; //ȡģ���������ȡ��������С��������ȡģ����
//	// ++ --
//	int a = 10;
//	++a; //ǰ��
//	cout << "a=" << a << endl;
//	int b = 10;
//	b++; //����
//	cout << "b=" << b << endl;
//	//ǰ�ã����ñ���+1��-1������б��ʽ����
//	int a1 = 10;
//	int b1 = ++a1 * 10;
//	cout << "a1=" << a1 << endl;
//	cout << "b1 = ++a1 * 10=" << b1 << endl;
//	//���ã��Ƚ��б��ʽ���㣬���ñ���+1��-1
//	int a2 = 10;
//	int b2 = a2++ * 10;
//	cout << "a2=" << a2 << endl;
//	cout << "b2 = a2++ * 10=" << b2 << endl;
//	system("pause");
//	return 0;
//}
////��ֵ�������= += -= *= /= %=
//int main()
//{
//	int a = 100;
//	cout << "a=" << a << endl;
//	a += 2; //a=a+2
//	cout << "a+=2=" << a << endl;
//
//	a = 100;
//	cout << "a=" << a << endl;
//	a -= 2; //a=a-2
//	cout << "a-=2=" << a << endl;
//
//	a = 100;
//	cout << "a=" << a << endl;
//	a *= 2; //a=a*2
//	cout << "a*=2=" << a << endl;
//
//	a = 100;
//	cout << "a=" << a << endl;
//	a /= 2; //a=a/2
//	cout << "a/=2=" << a << endl;
//
//	a = 100;
//	cout << "a=" << a << endl;
//	a %= 2; //a=a%2
//	cout << "a%=2=" << a << endl;
//	system("pause");
//	return 0;
//}
//�Ƚ��������==  !=  <  >  <=  >=
//�߼����������&& ||
//int main()
//{
//	int a = 10;
//	int b = 5;
//	cout << (a == b) << endl;
//	cout << (a != b) << endl;
//	cout << (a > b) << endl;
//	cout << (a < b) << endl;
//	cout << (a <= b) << endl;
//	cout << (a >= b) << endl;
//
//	cout << !a << endl;
//	cout << (a && b) << endl;//&& ����������Ϊ�棬��Ϊ�档ͬ��Ϊ�棬����Ϊ��
//	b = 0;
//	cout << (a && b) << endl;
//	cout << (a || b) << endl;//ͬ��Ϊ�٣�����Ϊ��
//	a = 0;
//	cout << (a || b) << endl;
//	system("pause");
//	return 0;
//}