#include <iostream>
using namespace std;
////if���
//int main()
//{
//	int num = 0;
//	cout << "���������";
//	cin >> num;
//	//����if���
//	if (num > 600)//if���治Ҫ�ӷֺš�����Ϊ��ִ��
//	{
//		cout << "��ϲ������һ����"<<endl;
//	}
//	//����if���
//	cout << "�������1��";
//	cin >> num;
//	if (num > 600)//����600ִ��
//	{
//		cout << "��ϲ������һ����" << endl;
//	}
//	else//������600��ִ��
//	{
//		cout << "δ����һ��" << endl;
//	}
//	//������if���
//	cout << "�������2��";
//	cin >> num;
//	if (num > 600)
//	{
//		cout << "����һ��" << endl;
//	}
//	else if (num > 500)
//		{
//			cout << "���϶���" << endl;
//		}
//		else if (num > 400)
//			{
//				cout << "��������" << endl;
//			}
//			else
//			{
//				cout << "����" << endl;
//			}
//	//Ƕ��if���
//	cout << "�������3��";
//	cin >> num;
//	if (num > 600)
//	{
//		cout << "����һ��" << endl;
//		if (num > 700)
//		{
//			cout << "�����廪" << endl;
//		}
//		else if (num > 650)
//		{
//			cout << "�����˴�" << endl;
//		}
//			else
//			{
//				cout << "��ͨһ��" << endl;
//			}
//	}
//	else if (num > 500)
//		{
//			cout << "���϶���" << endl;
//		}
//		else if (num > 400)
//			{
//				cout << "��������" << endl;
//			}
//			else
//			{
//				cout << "����" << endl;
//			}
//	system("pause");
//	return 0;
//}
////��ֻС��abc�����أ��ж���ֻ����
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int num3 = 0;
//	cout << "����С��a�����أ�";
//	cin >> num1;
//	cout << "����С��b�����أ�";
//	cin >> num2;
//	cout << "����С��c�����أ�";
//	cin >> num3;
//	if (num1 > num2)
//	{
//		if (num1 > num3)
//		{
//			cout << "С��a����" << endl;
//		}
//		else
//		{
//			cout << "С��c����" << endl;
//		}
//	}
//	else
//	{
//		if (num2 > num3)
//		{
//			cout << "С��b����" << endl;
//		}
//		else
//		{
//			cout << "С��c����" << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}
////��Ŀ����������ʽ1�����ʽ2;���ʽ3
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int num3 = 0;
//	num3 = (num1 > num2 ? num1 : num2);
//	cout << "num1=" << num1 << endl;
//	cout << "num2=" << num2 << endl;
//	cout << "num3=" << num3 << endl;
//	cout << endl;
//	//��C++�У���Ŀ��������ص��Ǳ��������Լ�����ֵ
//	(num1 > num2 ? num1 : num2) = 158;
//	cout << "num1=" << num1 << endl;
//	cout << "num2=" << num2 << endl;
//	cout << "num3=" << num3 << endl;
//	system("pause");
//	return 0;
//}
////switch��䣺
//int main()
//{
//	int num = 0;
//	cout << "�������֣�";
//	cin >> num;
//	switch (num)//�ж��������ֻ��������ֵ���ַ���ֵ
//	{
//	case 10:
//		cout << "�����Ӱ" << endl;
//		break;
//	case 9:
//		cout << "�õ�Ӱ" << endl;
//		break;
//	case 8:
//		cout << "�õ�Ӱ" << endl;
//		break;
//	case 7:
//			cout << "�õ�Ӱ" << endl;
//			break;
//	case 6:
//		cout << "һ���Ӱ" << endl;
//		break;
//	case 5:
//		cout << "һ���Ӱ" << endl;
//		break;
//	default:
//		cout << "��Ƭ" << endl;
//		break;
//	}
//
//}
////whileѭ����䣺
//int main()
//{
//	int num = 0;
//	while (num <= 10)//ѭ������Ϊ�棬ִ��ѭ�����
//	{
//		cout << num;
//		num++;
//	}
//	system("pause");
//	return 0;
//}
////��������Ϸ
//#include<ctime>  //timeϵͳʱ��ͷ�ļ�
//int main()
//{
//	int num = 0;
//	num = rand()%100+1; //ϵͳ����1-100��������
//	srand((unsigned int)time(NULL)); //�����������ӣ����õ�ǰϵͳʱ���������������ֹÿ�������������һ��
//	int num1 = 0;
//	
//	while (1)
//	{
//		cout << "����²�����֣�";
//		cin >> num1;
//		if (num1 > num)
//		{
//			cout << "����" << endl;
//		}
//		else if (num1 < num)
//		{
//			cout << "С��" << endl;
//		}
//		else
//		{
//			cout << "��ϲ�㣬�¶���" << endl;
//			break; //�˳�ѭ��
//		}
//	}
//
//	system("pause");
//	return 0;
//}