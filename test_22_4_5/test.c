#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

#include<stdio.h>
#include<string.h>


////1.4.3����ʹ�ã�С������
//int main(void)
//{
//	int num1 = 0;
//	int num2 = 0;
//	//scanf strcpy strlen strcat��vc��Ϊ�ǲ���ȫ�ģ���Ҫ���Ϸ����еĴ��룬�������c4996��c6031
//	scanf("%d%d", &num1, &num2);
//	int sum = 0;
//	sum = num1 + num2;
//	printf("sum=%d", sum);
//	return 0;
//}


//1.4.5����

// //���泣���Լ�const���εĳ�����
//int main(void)
//{
//	////���泣����ֱ��д��3��100
//	////const-������
//	////num��ʱΪconst���εĳ�����
//	//const int num = 4;
//	//printf("%d\n", num);
//	////����const���Σ���������޷��������¸�ֵ
//	////num = 8;
//	////printf("%d\n", num);
//
//	////n�Ǳ�����const���κ���г����ԣ��������ǳ�����
//	//const int n = 10;
//	//int arr[n] = { 0 };
//	return 0;
//}

////define����ı�ʶ������
//#define MAX 10
//int main(void)
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}

////ö�ٳ���-һһ�о�
////eg���Ա��У�Ů������
////��ԭɫ�������
////����:1234567
////ö�ٹؼ���-enum
//enum SEX
//{
//	//ö�ٳ���-���ɸ���-������±������Ը�
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main(void)
//{
//	//enum SEX m = FEMALE;
//	printf("%d\n", MALE);//Ĭ��0
//	printf("%d\n", FEMALE);//Ĭ��1
//	printf("%d\n", SECRET);//Ĭ��2
//	return 0;
//}





//1.5�ַ�����ת���ַ���ע��

//1.5.1�ַ���

////"abcdef";
////"THX2 ALLGAMEFANS!"
//int main(void)
//{
//	//ʹ���ַ������ʾ�ַ���
//	//"abc"-'a','b','c','\0'��Ĭ�Ͼ���'\0'�������������ַ���ĩβ
//	//'\0'-�ַ����Ľ�����־
//	char arr1[] = "abc";
//	//��Ҫ�ֶ�����'\0'��Ϊ������־
//	char arr2[] = { 'a','b','c','\0' };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	//�����ڼ�������Զ����ƴ��,ÿ���ַ����б��
//	//ASCII���룺a-97,A-65��ASCII��ֵ��
//	return 0;
//}

////'\0'����Ҫ��
//int main(void)
//{
//	char arr1[] = "abc";
//	//'\0'��0һ��,��ΪASCII0������Ҫע��'0'������ַ�0����ӦASCII48��������
//	char arr2[] = { 'a','b','c',0};
//	//strlen-string length-�����ַ�������
//	printf("%lld\n", strlen(arr1));
//	//�����ֶ����'\0'����Ϊ����������Ȼ�������ģ�ֱ��ĳһλ�����ֵΪ'\0'����
//	printf("%lld\n", strlen(arr2));
//	return 0;
//}


//1.5.2ת���ַ�-ͨ��ʹ��\��ת��

//int main(void)
//{
//	//\n-һ��ת���ַ�
//	printf("abc\n");
//	return 0;
//}

//int main(void)
//{
//	//t��һ�������ַ�����\ת��Ϊ��\t-ˮƽ�Ʊ������ӡʱ����ֿո�
//	//ʹ��\�ٴ�ת��\tԭ������˼��\\t�����������Ϊ�ַ�\t
//	printf("c:\\test\\32\\test.c");
//	//�ϰ汾������Ϊ����ĸ�ʣ������Ϊ������Ҫ��\?\?)��ת��
//	return 0;
//}

//int main(void)
//{
//	//ʹ��\'ת��'
//	printf("%c\n",'\'');
//	return 0;
//}

//int main(void)
//{
//	//������\dddת���ַ���ddd-һ�������˽������֣�eg������\32
//	//\32-�����˽����ַ�-ת��Ϊʮ�����е�����26-��Ӧ��ASCII��ֵ��Ϊ26-ASCII���д�����ַ�-��ͷ
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	return 0;
//}

//int main(void)
//{
//	//����\xddת���ַ���dd-����ʮ����������
//	printf("%c\n",'\x61');
//	return 0;
//}


//1.5.3ע��
//���������Ķ���





////1.6ѡ�����
//int main(void)
//{
//	int input = 0;
//	printf("����BUPT\n");
//	printf("��Ҫ�ú�ѧϰ��?(1/0)>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("future\n");
//	else
//		printf("������\n");
//	return 0;
//}





////1.7ѭ�����
////while���
////for���
////do...whileѭ��
//int main(void)
//{
//	int line = 0;
//	printf("����BUPT\n");
//	while (line<20000)
//	{
//		line++;
//		printf("��һ�д���:%d\n",line);
//	}
//	if(line>=20000)
//	    printf("future\n");
//	return 0;
//}





////1.8����
////�⺯��
////�Զ��庯��
////f(x)=2*x+1;
////f(x,y)=x+y;
//int ADD(int x, int y)
//{
//	int z=x + y;
//	return z;
//}
//int main(void)
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	//sum = num1 + num2;
//	sum = ADD(num1, num2);
//	int a = 100;
//	int b = 200;
//	//sum = a + b;
//	sum = ADD(a + b);
//	printf("sum=%d", sum);
//	return 0;
//}





////1.9����-һ����ͬ���͵ļ���
//int main(void)
//{
//	//int a = 1;
//	//int b = 2;
//	//int c = 3;
//	//����һ�����ʮ������������
//    //���ڴ���������ռ��ţ�����ЩԪ�ص��±�Ĭ�ϴ�0��ʼ���ֱ�Ϊ0��1��2��3��4��5��6��7��8��9
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//  //Ҳ��дΪint arr[]={1,2,3,4,5,6,7,8,9,10},���������ʼ�������Բ�ָ�������С����ʼ����Ԫ�ظ�����ȷ��
//	//int char ch[20];
//  //int float arr2[5];
//	//���±����ʽ�ɷ���Ԫ��-	printf("%d\n", arr[4]);
//	int i = 0;
//	while(i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	return 0;
//}





//1.10������

////1.10.1������������+ - * / %
////%ȡģ����������emmmm
//int main(void)
//{
//	int a = 5 % 2;
//	printf("%d\n", a);
//	return 0;
//}


////1.10.2��λ��������<<-���� >>-����
//int main(void)
//{
//	int a = 1;
//	//����1ռ4byte-32bit
//	//00000000 00000000 00000000 00000001
//	//��λ������߶��������ұ߿հײ�0
//	int b = a << 2;
//	printf("%d\n", b);
//	//��λ֮������
//	printf("%d\n", a);
//	return 0;
//}


////1.10.3�������ƣ�λ��������& ^ |
//int main(void)
//{
//	//&��λ�루�ң�:һ�پ���
//    //|��λ��һ�����
//    //^��λ���ͬ0��1
//	int a = 3;//011
//	int b = 5;//101
//	int c = a ^ b;
//	printf("%d\n", c);
//	return 0;
//}


////1.10.4��ֵ������: = += -= *= /= &= ^= |= >>= <<=
//int main(void)
//{
//	//=��ֵ
//	//==�ж����
//	//+=�Ӻ�ֵ���Լ�
//	//-=����ֵ���Լ�
//	//����ͬ����Ϊ���ϸ�ֵ����+= -= *= /= %=......
//	int a = 10;
//	a += 10;
//	return 0;
//}


//1.10.5��Ŀ��������! - + & sizeof ~ -- ++ �Ǻ� (���ͣ�
//����˫Ŀ����������Ŀ�������������Ǻ�����彲

//int main(void)
//{
//	//int a = 10;
//	//int b = 20;
//	////��ʱ+��Ϊ˫Ŀ������
//	//a + b;
//	
//	////C������0-�٣���0-��
//	////!��Ŀ���������߼������������٣��ٱ���
//	// int a = 1;
//	//printf("%d\n", a);
//	//printf("%d\n", !a);
//
//	////+ - ��Ŀ����������ʾ����ֵ
//	//int a = -2;
//	//int b = -a;
//	//int c = +3;
//
//	//int a = 10;
//	////sizeof������Ǳ���/������ռ�ռ��С����λ���ֽ�
//	////sizeof���ص���һ��8bytes�޷������ͣ�Ӧ��%lldռλ��
//	//printf("%lld\n", sizeof(a));
//	//printf("%lld\n", sizeof(int));
//	//printf("%lld\n", sizeof a);
//	////sizeof����a����ʡ�����ţ�����int����
//	////error:printf("%lld\n", sizeof int);
//
//	////ʮ������Ԫ�ص�����
//	//int arr[10] = { 0 };
//	//int sz = 0;
//	////10*sizeof(int)=40
//	//printf("%lld\n", sizeof(arr));
//	////��������Ԫ�ظ���������=�����ܴ�С/ÿ��Ԫ�صĴ�С
//	//sz = sizeof(arr) / sizeof(arr[0]);
//	//printf("sz=%d\n", sz);
//	return 0;
//}