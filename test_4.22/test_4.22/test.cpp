#include  <iostream>
using namespace std;
//
//int main()
//{
//	cout << "hello world!" << endl; //����Ļ�����hello world!
//	system("pause");
//	return 0;
////}
//#define Day 7 //#define ����ĺ곣��
//int main()
//{
//	int a = 10; //������������������ ������ = ��ʼֵ��
//	const int month = 12; //const���α�����Ϊ������const ���� ������=��ʼֵ��
//	cout << a << endl;
//	cout << "һ���ܹ��У�" << Day << "��" << endl;
//	cout << "һ���ܹ��У�" << month << "��" << endl;
//	system("pause");
//	return 0;
//}
////��ʶ������������
////1. ��ʶ�������ǹؼ��� 
////2.��ʶ��������ĸ�����֡��»������
////3.��ʶ����һ���ַ�ֻ������ĸ���»���
////4.��ʶ�����ִ�Сд
//int main()
//{
//	int abc = 10;
//	int _abc = 10;
//	int _14abc = 10;
//	int ABC = 10; //���飺������ȡ��ʱ������ܹ�����֪��
//	system("pause");
//	return 0;
//}
//��������
int main()
{
	short num1 = 10;//������
	int num2 = 10;//����
	long num3 = 10;//������
	long long num4 = 10;//��������
	float f1 = 3.14f;//�����ȸ����͡�f���ã���ʾ����f1�ǵ����ȸ�������������Ĭ��С��Ϊdouble����
	double d1 = 3.1415926;//˫���ȸ����͡�Ĭ�����6λ��Ч����
	float f2 = 3e2;//��ѧ��������ʾС����f2=3*10^2
	float f3 = 3e-2;//��ѧ��������ʾС����f2=3*10^-2
	char ch = 'a'; //�ַ��ͣ������ַ��ͱ���ʱ��Ҫ�õ����ţ���������ֻ����һ����ĸ
	//�ַ������ǰѶ�Ӧ��ASCLL��ֵ����洢��Ԫ
	double d2 = 3e-3;//d2=3*10^-3
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	cout << "num3=" << num3 << endl;
	cout << "num4=" << num4 << endl;
	cout << "f1=" << f1 << endl;
	cout << "d1=" << d1 << endl;
	cout << "f2=" << f2 << endl;
	cout << "f3=" << f3 << endl;
	cout << "d2=" << d2 << endl;
	cout << "ch=" << ch << endl;
	cout << "short�ռ��С��" << sizeof(short) << endl;//2
	cout << "int�ռ��С��" << sizeof(num2) << endl;//4
	cout << "long�ռ��С��" << sizeof(long) << endl;//4
	cout << "long long �ռ��С��" << sizeof(num4) << endl;//8
	cout << "float�ռ��С��" << sizeof(f1) << endl;//4
	cout << "double�ռ��С��" << sizeof(d1) << endl;//8
	cout << "char�ռ��С��" << sizeof(ch) << endl;//1
	system("pause");
	return 0;
}