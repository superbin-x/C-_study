#include <iostream>
using namespace std;

////do{����}while()ѭ�����
//int main()
//{
//	int num = 0;
//	do
//	{
//		cout << num << endl;
//		num++;
//	} while (num <= 10);
//
//
//	system("pause");
//	return 0;
//}
////ˮ�ɻ�����һ��3λ��������ÿλ�ϵ�����������֮�͵���������
////��λ^3+ʮλ^3+��λ^3=����
//int main()
//{
//	int num = 100;
//	do
//	{
//		int a = 0;
//		int b = 0;
//		int c = 0;
//		a = num % 10;//��ȡ��λ
//		b = num / 10 % 10;//��ȡʮλ
//		c = num / 100;//��ȡ��λ
//		if(a*a*a + b*b*b + c*c*c == num)
//		{
//			cout << num << endl;
//		}
//		num++;
//	} while (num < 1000);
//	system("pause");
//	return 0;
//}
////forѭ�����
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		cout << i << endl;
//	}
//
//
//	system("pause");
//	return 0;
//}
////�����ӣ�1-100�������ָ�λ��7��ʮλ��7����7�ı�������������ֺ�������
//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		//  ��λ��7        ʮλ��7         7�ı���
//		if (7 == i % 10 || 7 == i / 10 || 0 == i % 7)
//		{
//			cout << "������  " << i << endl;
//		}
//		else
//		{
//			cout << i <<endl;
//		}
//	}
//	return 0;
//}
////Ƕ��ѭ��
//int main()
//{
//	for (int j = 0; j < 10; j++)//���ִ��һ�Σ��ڲ�ִ��һ��
//	{
//		for (int i = 0; i < 10; i++)//�ڲ�ѭ��
//		{
//			cout << "*  ";
//		}
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}
////�˷��ھ���
//int main()
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			int a = i * j;
//			cout << j << "*" << i << "=" << a << "  ";
//		}
//		cout << endl;
//	}
//
//
//	system("pause");
//	return 0;
//}
