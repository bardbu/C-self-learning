#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

#include<stdio.h>


//1.1ʲô��C����
 

//��������ԣ��˺ͼ�������������ԣ���c,c++,java,python
//��չ������һ���ӵͼ����Ե��߼����Բ��Ϸ�չ�Ĺ���
//1�����������ԣ�����Ӳ��������1�������㣬eg��10100101���ڿ�ѧ����Ҫ���ֲ�
//2��100001-ADD-���Ƿ�-�������
//3��B����
//4��C���ԣ�C++����-�߼����Գ�����


//C���Եķ�չ
//C����-���ڲ�����-����-����
//���ʱ�׼��ANSI�ƶ�c89��c90����׼
//Ҳ��c99��c11����׼������������





////1.2дһ��c���Գ���
////��Ҫ����һ��stdio.h���ļ�
////std-��׼-standard input output
//// eg��#include<stdio.h>
////.cԴ���룬.hͷ�ļ�

////������-�������-main��������ֻ��һ��
////int�����͵���˼
////mainǰ���int��ʾmain��������֮�󷵻�һ������ֵ
////void main()����д����ʱ�ˣ�������Ҫ����
//int main(void)
//{
//	//main�������������������
//	//����Ļ��������ú���-print function-printf-��ӡ����
//	//�⺯��-C���Ա����ṩ������ʹ�õĺ���
//	//���˵Ķ���-��Ҫ���к�-���Ϸ�ע��
//	printf("THX2\nALLGAMEFANS!\n");
//	return 0;
//}





////1.3�������ͣ�char short int long "long long" float double 
////%d-��ӡ����
////%c-��ӡ�ַ�
////%f-��ӡ��������
////%p-�Ե�ַ��ʽ��ӡ
////%x-��ӡ16�������֣����ϵĶ�������QAQ��
//int main(void)
//{
//	////char-�ַ�����
//	////���ڴ�����ռ�ch-�������洢����
//	//char ch = 'A';
//	////%c-��ӡ�ַ����͵�����
//	//printf("%c\n", ch);
//
//	////short int-������
//	////int-����
//	//int age = 20;
//	////%d-��ӡ����ʮ��������
//	//printf("%d\n", age);
//
//	////long-������
//	//long num = 100;
//	//printf("%d\n", num);
//
//	//float f = 5.0;
//	//printf("%f\n", f);
//
//	//double d = 3.14;
//	//printf("%lf\n", d);
//
//  ////������еĵ�λ��bit-8-byte-1024-kb-1024-mb-1024-gb......
//	////��ͬ����ռ�ÿռ䲻ͬ-1��2��4��4/8����׼�涨sizeof(long)>=sizeof(int)���ɣ���8��4��8��bytes��
//	//printf("%lld\n", sizeof(char));
//	//printf("%lld\n", sizeof(short));
//	//printf("%lld\n", sizeof(int));
//	//printf("%lld\n", sizeof(long));
//	//printf("%lld\n", sizeof(long long));
//	//printf("%lld\n", sizeof(float));
//	//printf("%lld\n", sizeof(double));
//	return 0;
//}






//1.4����������

////1.4.1��������ķ���
//int main(void)
//{
//  //char "w";
//	//age
//	//20
//	//���ڴ�����2byte=16bit��������š�20�������
//	short age = 20;
//	//���ڴ�����4byte���С��
//	//Ĭ��95.6��double�ͣ�������f�ᾯ��ض�
//	float weight = 95.6f;
//	return 0;
//}


//1.4.2�������ࣺ�ֲ�������ȫ�ֱ���
////ȫ�ֱ���-�����ڴ���飨{}��֮��ı���
//int num2 = 20;
//int main(void)
//{
//	//�ֲ�����-�����ڴ���飨{}���ڲ��ı���
//	int num1 = 10;
//	return 0;
//}

////�ֲ�������ȫ�ֱ������ֽ��鲻Ҫ��ͬ��������ᣬ����bug
////����ͬʱ���ֲ���������
//int a = 100;
//int main(void)
//{
//	int a = 10;
//	printf("%d\n", a);
//	return 0;
//}

////ȫ�ֱ����ܹ�printf
//int a = 10;
//int main(void)
//{
//	{
//		//��ʱa�ھֲ���Ϊδ������ʶ�����޷�printf
//		int a = 10;
//	}
//	printf("%d\n", a);
//	return 0;
//}


////1.4.3����ʹ��
//int main(void)
//{
//	//�����������ĺ�
//	int num1 = 0;
//	int num2 = 0;
//	//��������-ʹ�����뺯��scanf
//	//��&��ȡ��ַ����
//	scanf("%d%d", &num1, &num2);
//	//C�����﷨�涨��������Ҫ�����ڵ�ǰ�������ǰ��
//	//error��int sum = 0;����Ϊɶ��û���֣���
//	int sum = 0;
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}


//1.4.4���������������������
//int main(void)
//{
//	//�ֲ�������λ�þ�����������
//	int num = 0;
//	printf("num=%d\n", num);
//	return 0;
//}

//ȫ�ֱ�������������������
//int global = 2022;
//void test()
//{
//	printf("test()--%d\n", global);
//}
//int main(void)
//{
//	//���ú���֤��ȫ�ֱ���������Ҳ������
//	test();
//	//֤��ȫ�ֱ�������������
//	printf("%d\n", global);
//	return 0;
//}

////����Դ�ļ��е�ȫ�ֱ���Ҳ��������ʹ��
//int main(void)
//{
//	//��Ҫextern����һ���ⲿ����
//	extern int global;
//	printf("%d\n", global);
//	return 0;
//}

////��������
//int main(void)
//{
//	//���š�{}��Ϊ�ֲ�������������
//	{
//		int a = 10;
//		printf("a=%d\n", a);
//	}
//	//printf("a=%d\n", a);error-��������������
//	return 0;
//}