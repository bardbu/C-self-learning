#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

#include<stdio.h>
#include<string.h>


////���䣺�ַ���
//int main(void)
//{
//	//�ַ���������־-'\0'
//	//'\0'��һ��ת���ַ���ASCII��ֵ��0
//	//0-��һ������0
//	//'0'-�ַ�0-ASCII48
//	return 0;
//}
//EOF-end of file-�ļ�������־


//���䣺���������Ľϴ�ֵ

//int main(void)
//{
//	int num1 = 10;
//	int num2 = 20;
//	if (num1 > num2)
//		printf("�ϴ�ֵ�ǣ�%d\n", num1);
//	else
//		printf("�ϴ�ֵ�ǣ�%d\n", num2);
//	return 0;
//}

//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main(void)
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = MAX(num1, num2);
//	printf("max=%d\n", max);
//	return 0;
//}


//1.10.5��Ŀ��������! - + & sizeof ~ -- ++ �Ǻ� (���ͣ�

////sizeof
//int main(void)
//{
//	int a = 10;
//	//int��������Ԫ�ص����ͣ������������������int[6]
//	int arr[] = { 1,2,3,4,5,6 };
//	//�������ֵȼ�
//	printf("%lld\n", sizeof(a));
//	printf("%lld\n", sizeof a);
//	printf("%lld\n", sizeof(int));
//	//printf("%lld\n", sizeof int);err
//	//���������С����λ��byte
//	printf("%lld\n", sizeof(arr));
//	//arr[0]�±�Ϊ0�ģ�����һ��Ԫ�صĴ�С
//	printf("%lld\n", sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}

////��λȡ����������~ 1010��Ϊ0101
//int main(void)
//{
//	//ԭ�룬���룬����
//	int a = 0;
//	//a��������ֱ�Ӵ洢��ԭ��
//	//aԭ��00000000 00000000 00000000 00000000
//	int b = ~a;
//	//û��������ʱ�����ͱ�Ĭ��Ϊ�з������ͣ����λ�Ƿ���λ
//	//����������b��a��λȡ��֮��õ��Ķ���������11111111 11111111 11111111 11111111
//	//���������λ��1�����ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ���
//	//������ϵͳ�������λ��1��Ĭ����Ϊ�����Ĳ���
//	//b����11111111 11111111 11111111 11111111
//	//b����11111111 11111111 11111111 11111110
//	//bԭ��10000000 00000000 00000000 00000001
//	//��ӡ�����������ԭ�룬��-1
//	printf("%d\n", b);
//	return 0;
//}

//���䣺ԭ�뷴�벹��
//ֻҪ���������ڴ��д洢�Ķ��Ƕ����Ʋ���
//����-ԭ�뷴�벹������ͬ��
//����-�洢����-��һ�õ�����-������λ����ȡ���õ�ԭ��

////ǰ�ú��ò�������-- ++
//int main(void)
//{
//	int a = 10;
//
//	////����++,�Ȱ�a��ֵ����b����++
//	//int b = a++;
//	
//	////ǰ��++����++�ٸ�ֵ
//	//int b = ++a;
//
//	////����--����ǰ��ͬ��
//	//int b = a--;
//
//	printf("a=%d\nb=%d\n", a, b);
//	return 0;
//}

////ǿ������ת����������(����)
//int main(void)
//{
//	//û������ʱ���о��棬������ǿ������ת����������������ת��
//	int a = (int) 3.14;
//	printf("%d\n", a);
//	return 0;
//}


//1.10.6��ϵ������
//> >= < <= != ==


////1.10.7�߼���������&&�߼���-���� ||�߼��� 
//int main()
//{
//	//C������0��ʾ�٣���0��ʾ��
//	int a = 0;
//	int b = 5;
//	int c = a || b;
//	printf("c=%d\n", c);
//	return 0;
//}


////1.10.8��������������Ŀ����������exp1 ? exp2 : exp3 ;
////1Ϊ�棬���2��1Ϊ�٣����3
//int main(void)
//{
//	int a = 100;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a: b);
//	printf("%d\n", max);
//	return 0;
//}


//1.10.9���ű�ʾʽ��exp1,exp2,exp3,...,expN
//���Ƕ��ſ������ڸ������ʽemmmm����ͨ���׶�


//1.10.10�±����á��������úͽṹ��Ա��[] () . ->

////[]
//int main(void)
//{
//	int arr[10] = { 0 };
//	printf("%d\n",arr[4]);//�����[]�����±����ò�����
//	return 0;
//}

////()
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//
//}
//int main(void)
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//�˴���()��Ϊ�������ò�����
//	printf("%d\n", sum);
//	return 0;
//}


//1.10.11δϸ���Ĳ�������& * . ->





//1.11���ùؼ���
//���ס�����ܺͱ������ظ�
//auto-�Զ���������Ĭ�ϣ�ʡ�� break-ֹͣѭ����Ҳ����switch case��� case-switch case��� char-�ַ���
//const-���γ����� continue-����������ѭ���� default-Ĭ�ϣ�switch case����� do-����do whileѭ��
//double-˫���ȸ����� else-if else��� enum-ö�� extern-�����ⲿ����
//float-�����ȸ����� for-ѭ�� goto-goto��� if-�ж����
//int-���� long-������ register-�Ĵ�����register int�� return-����
//short-������ signed-�з���������Ĭ�ϣ�ʡ�� sizeof-���㳤�� static-��̬��
//struct-�ṹ��ؼ��� switch-switch case��� typedef-���ͣ��أ����� union-������
//unsigned-�޷��� void-�ޣ��� volatile-�ѵ㣬������c���Զ�λ while-ѭ��

//register��
//������洢����ʱ
//�Ĵ��� ���ٻ��� �ڴ� Ӳ��
//�����ٶ��ɴ��С���ռ���С���


////1.11.1typedef-���ͣ��أ�����-�����
//int main(void)
//{
//	typedef unsigned int u_int;
//	unsigned int num1 = 10;
//	u_int num2 = 20;
//	return 0;
//}


////1.11.2static-���α���

////���ξֲ�������ʹ���������ڱ䳤
//void test()
//{
//	static int a = 1;//ʹa��ɾ�̬�ֲ�����
//	a++;
//	printf("a = %d\n", a);
//}
//int main(void)
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

////����ȫ�ֱ���
////�ı���������-�þ�̬ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
//int main(void)
//{
//	//extern-�����ⲿ����
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//	return 0;
//}

////���κ���
////�ı��˺�������������
////��������º������ⲿ�������ԣ����κ����ڲ���������
////��Ҫ�������ⲿ����
//extern int Add(int, int);
//int main(void)
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}





//1.12#define���峣���ͺ�

////#define�����ʶ������
//#define MAX 100

////#define�����-������
////���溯����ʽ
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////��ķ�ʽ
//#define Min(X,Y) (X<Y?X:Y)
//int main(void)
//{
//	int a = 10;
//	int b = 20;
//	//����
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	//��
//	int min = Min(a, b);
//	printf("min = %d\n", min);
//	return 0;
//}





//1.13ָ��
//�ڴ�����һ��һ����С��Ԫ���ҵ���Ԫ��Ҫ��ַ
//32λ��64λϵͳ�ֱ���2^32��2^64����ŵ�ַ
//��һ����Ԫ����Ϊ1bit��ֻ��0.5gb�����ж�Ӧ��ַ����ʱ��ַ������
//��һ����Ԫ����Ϊ1byte��������4gb���ݶ���Ӧ��ַ

//ָ�����-������ŵ�ַ�ı���

//int main(void)
//{
//	int a = 10;//����ռ���a��ֵ��int����ռ�ô�С4bytes
//	int* p = &a;//����ռ���ָ��-a�ĵ�ַ,&a-��ʾȡa��ַ��32λ�����ϵ�ָ���С4bytes��64λ������ָ���С8bytes
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p = 20;//*-�����ò������������õ�ַ-ͨ����ַ�ҵ����Ӧ�ռ䣬Ҳ����ָ���ʹ�÷���
//	printf("a = %d\n", a);
//	return 0;
//}

//int main(void)
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	printf("%c\n", ch);
//	printf("%lld\n", sizeof(pc));
//	return 0;
//}