#include <iostream>
#include <string>
using namespace std;


////����Ԫ������:��β����
//int main()
//{
//	int arr[5] = { 1,5,4,8,9 };
//	int start = 0;
//	int end = sizeof(arr) / sizeof(arr[0]) - 1;
//	cout << "����ǰ" << endl;
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		cout << arr[i] << " ";
//	}
//	while (start < end)
//	{
//		int temp = arr[start];
//		arr[start] = arr[end];
//		arr[end] = temp;
//		start++;
//		end--;
//	}
//	cout << endl;
//	cout << "���ú�" << endl;
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}

////ð������
//int main()
//{
//	int arr[] = { 1,23,5,7,8,56,3,9,54,6,5,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	cout << "ð������ǰ" << endl;
//	for (int i = 0; i < sz; i++)
//	{
//		cout << " " << arr[i] << " ";
//	}
//	cout << endl;
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	cout << "ð�������" << endl;
//	for (int i = 0; i < sz; i++)
//	{
//		cout << " " << arr[i] << " ";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}

//��ά����
//int main()
//{
//	//��ά���鶨��
//	int arr[3][4];
//	int arr1[3][4] = { 1,2,4,5,6,8,7,8 };
//	int arr2[3][4] = 
//	{ 
//		{1,2,4},
//		{5,6,8},
//		{7,8}
//	};
//	//��ά������������ѭ����ӡ�������ڲ�ѭ����ӡ����
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			cout << arr1[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			cout << arr2[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//	//��ά������������
//	//1.�鿴��ά����ռ�ÿռ��С sizeof(������) 
//	//2.�鿴��ά�����׵�ַ
//	int arr0[3][4] =
//	{
//		{1,2,4},
//		{5,6,8},
//		{7,8}
//	};
//	cout << "arr0:" << endl;
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			cout << arr2[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << "��ά����ռ�ÿռ�: " << sizeof(arr0) << endl;
//	cout << "��ά�����һ��ռ�ÿռ�: " << sizeof(arr0[0]) << endl;
//	cout << "��ά�����һ��Ԫ��ռ�ÿռ�: " << sizeof(arr0[0][0]) << endl;
//	cout << "��ά����������" << sizeof(arr0) / sizeof(arr0[0]) << endl;
//	cout << "��ά����������" << sizeof(arr0[0]) / sizeof(arr0[0][0]) << endl;
//
//	cout << "��ά�����׵�ַ��" << arr << endl;
//	cout << "��һ��Ԫ���׵�ַ��" << &arr[0][0] << endl;
//	cout << "��һ���׵�ַ��" << arr[0] << endl;
//	cout << "�ڶ����׵�ַ��" << arr[1] << endl;
//	system("pause");
//	return 0;
//}

//��ά���飺���Գɼ�ͳ��

int main()
{
	string str[5] = { "  ","����","��ѧ","Ӣ��","�ܷ�" };
	for(int i = 0; i < 5;i++ )
	{
		cout << " " << str[i] << " ";
	}
	cout << endl;
	string names[3] = { "����","����","����" };
	int scores[3][3] =
	{
		{78,86,99},
		{85,95,60},
		{60,70,80}
	};
	for (int i = 0; i < 3; i++)
	{
		int sum1 = 0;
		cout << names[i]<<"  ";
		for (int j = 0; j < 3; j++)
		{
			cout << " " << scores[i][j] << "  ";
			sum1 = sum1 + scores[i][j];
		}
		cout << "  " << sum1 << endl;
	}
	system("pause");
	return 0;
}