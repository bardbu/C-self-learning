#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

#include<stdio.h>
#include<string.h>


//1.13ָ��

//int main(void)
//{
//	int a = 10;//����ռ���a
//	int* p = &a;//����ռ���ָ�����p-a��ַ
//	//int*��һ�����壬*����p��һ��ָ�������int����ָ��ָ�������������
//	printf("%p\n", &a);//��ӡa��ַ
//	printf("%p\n", p);//��ӡָ������
//	printf("%d\n", a);//��ӡa��ֵ
//	*p = 30;//*�����ò�����-ͨ��ָ���ҵ���ַ��Ӧ���ݣ����ı�
//	printf("%d\n", a);
//	return 0;
//}

//int main(void)
//{
//	double d = 3.14;
//	double* pd = &d;
//	printf("%lld\n", sizeof(pd));
//	*pd = 6.28;
//	printf("%lf\n", d);
//	return 0;
//}





//1.14�ṹ��
//�Լ�������������ͣ�Ŀ�����������Ӷ���
//��-����+���+����+���֤��+������
//��-����+����+������+����+��š�����

////����һ���ṹ������
//struct Book
//{
//	char name[15];
//	char author[5];
//	char publishing[20];
//	short price;
//
//};
//int main(void)
//{
//	//���ýṹ�����ʹ���һ�������͵Ľṹ�����
//	struct Book b1 = { "C���Գ������","BUPT","BUPT",55};
//	printf("������%s\n", b1.name);
//	printf("���ߣ�%s\n", b1.author);
//	printf("�����磺%s\n", b1.publishing);
//	printf("�۸�%dԪ\n", b1.price);
//
//	//���Ľṹ���е����ݣ�price�Ǳ���������ֱ�Ӹ��ģ�
//	//��name���ַ�����strcpy-string copy-�ַ�������
//	b1.price = 15;
//	strcpy(b1.name, "c++");
//	printf("�޸ĺ�ļ۸�%dԪ\n", b1.price);
//	printf("�޸ĺ�����֣�%s\n", b1.name);
//	//ָ�����ͨ��ʾ
//	struct Book* pb = &b1;
//	printf("%s\n", (*pb).name);
//	printf("%d\n", (*pb).price);
//
//	//ָ��ļ�ͷ��ʾ
//	//ʹ��.���������ṹ�����.��Ա
//	//ʹ��->���������ṹ��ָ��->��Ա
//	printf("��ͷ%s\n", pb->name);
//	printf("��ͷ%d\n", pb->price);
//	return 0;
//}