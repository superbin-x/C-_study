#include <iostream>
using namespace std;
//һά����
//int main()
//{
//	//���ֶ��巽ʽ
//	//�����±��0��ʼ
//	int arr[5];
//	arr[0] = 1;
//	arr[1] = 2;
//	arr[2] = 3;
//	arr[3] = 4;
//	arr[4] = 5;
//	cout << "��һ�� " << arr[2] << endl;
//	int arr1[5] = { 1,2,3,4,5 };
//	cout << "�ڶ��� " << arr[2] << endl;
//	//����ѭ������������Ԫ��
//	for (int i = 0; i < 5; i++)
//	{
//		cout << arr1[i] << " ";
//	}
//	cout << endl;
//	int arr2[5] = { 1,2,3 };//��ʼ��δ�������飬��0���
//	for (int i = 0; i < 5; i++)
//	{
//		cout << arr2[i] << " ";
//	}
//	cout << endl;
//	int arr3[] = { 1,2,3,4,5 ,6};
//	cout << "������ " << arr3[2] << endl;
//	system("pause");
//	return 0;
//}
////һά��������;
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	cout << "��������ռ��С��" << sizeof(arr) << endl;//ͳ�������������ڴ��еĳ���
//	cout << "ÿ��Ԫ�ؿռ��С��" << sizeof(arr[0]) << endl;
//	cout << "Ԫ�ظ�����" << sizeof(arr) / sizeof(arr[0]) << endl;
//	cout << "�����׵�ַ��" << arr << endl;//��ȡ�������ڴ��е��׵�ַ
//	cout << "��һ��Ԫ�ص�ַ��" << &arr[0] << endl;
//	cout << "�ڶ���Ԫ�ص�ַ��" << &arr[1] << endl;
//
//
//	system("pause");
//	return 0;
//}
//��ֻС������أ�Ѱ�����ص�С��
int main()
{
	int arr[5] = { 456,487,625,358,512 };
	int a = 0;
	int max = 0;
	for (int i = 0; i < 5; i++)
	{
		
		if (arr[i] > max)
		{
			max = arr[i];
			a = i;
		}
	}
	cout << "С�� " << a << " ���أ�����Ϊ��" << max << endl;
	system("pause");
	return 0;
}