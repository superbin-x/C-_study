#include <iostream>
using namespace std;

////break���
//int main()
//{
//	 //������switch�����
//	cout << "ѡ�񸱱��Ѷȣ�" << endl;
//	cout << "1.��ͨ  2.�е�  3.����  4.������";
//	int select = 0;
//	cin >> select;
//	switch (select)
//	{
//		case 1:
//			cout << "������ͨ�Ѷ�ing" << endl;
//			break;
//		case 2:
//			cout << "�����е��Ѷ�ing" << endl;
//			break;	
//		case 3:
//			cout << "���������Ѷ�ing" << endl;
//			break;
//		case 4:
//			cout << "���������Ѷ�ing" << endl;
//			break;
//		default:
//			cout << "ѡ�����" << endl;
//			break;
//	}
//	//������ѭ�������
//	for (int i = 0; i < 10; i++)
//	{
//		if (5 == i)
//		{
//			cout << endl;
//			break;//�˳�ѭ��
//		}
//		cout << i << " ";
//	}
//	//������Ƕ��ѭ����
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			if (5 == j)
//			{
//				break;//�˳��ڲ�ѭ��
//			}
//			cout << "* ";
//		}
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}
////continue���
//int main()
//{
//	for (int i = 0; i <= 100; i++)
//	{
//
//		if (0 == i % 2)
//		{
//			continue;//ִ�е��˲�������ִ�У�ִ����һ�δ���
//		}
//		cout << i << " ";
//	}
//
//	system("pause");
//	return 0;
//}
//goto���
int main()
{
	cout << "1��***" << endl;
	cout << "2��***" << endl;
	goto flag;
	cout << "3��***" << endl;
	cout << "4��***" << endl;
flag:
	cout << "5��***" << endl;
	system("pause");
	return 0;
}