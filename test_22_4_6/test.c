#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

#include<stdio.h>
#include<string.h>


////补充：字符串
//int main(void)
//{
//	//字符串结束标志-'\0'
//	//'\0'是一个转义字符，ASCII码值是0
//	//0-是一个数字0
//	//'0'-字符0-ASCII48
//	return 0;
//}
//EOF-end of file-文件结束标志


//补充：求两个数的较大值

//int main(void)
//{
//	int num1 = 10;
//	int num2 = 20;
//	if (num1 > num2)
//		printf("较大值是：%d\n", num1);
//	else
//		printf("较大值是：%d\n", num2);
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


//1.10.5单目操作符：! - + & sizeof ~ -- ++ 星号 (类型）

////sizeof
//int main(void)
//{
//	int a = 10;
//	//int是数组内元素的类型，数组的类型是难理解的int[6]
//	int arr[] = { 1,2,3,4,5,6 };
//	//下面两种等价
//	printf("%lld\n", sizeof(a));
//	printf("%lld\n", sizeof a);
//	printf("%lld\n", sizeof(int));
//	//printf("%lld\n", sizeof int);err
//	//计算数组大小，单位是byte
//	printf("%lld\n", sizeof(arr));
//	//arr[0]下标为0的，即第一个元素的大小
//	printf("%lld\n", sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}

////按位取反操作符：~ 1010变为0101
//int main(void)
//{
//	//原码，反码，补码
//	int a = 0;
//	//a是正数，直接存储其原码
//	//a原码00000000 00000000 00000000 00000000
//	int b = ~a;
//	//没有声明的时候，整型被默认为有符号整型，最高位是符号位
//	//所以在这里b对a按位取反之后得到的二进制码是11111111 11111111 11111111 11111111
//	//负数（最高位是1）在内存中存储的时候，存储的是二进制的补码
//	//在这里系统看到最高位是1，默认其为负数的补码
//	//b补码11111111 11111111 11111111 11111111
//	//b反码11111111 11111111 11111111 11111110
//	//b原码10000000 00000000 00000000 00000001
//	//打印出是这个数的原码，即-1
//	printf("%d\n", b);
//	return 0;
//}

//补充：原码反码补码
//只要是整数，内存中存储的都是二进制补码
//正数-原码反码补码是相同的
//负数-存储补码-减一得到反码-除符号位其他取反得到原码

////前置后置操作符：-- ++
//int main(void)
//{
//	int a = 10;
//
//	////后置++,先把a的值赋给b，再++
//	//int b = a++;
//	
//	////前置++，先++再赋值
//	//int b = ++a;
//
//	////后置--，与前面同理
//	//int b = a--;
//
//	printf("a=%d\nb=%d\n", a, b);
//	return 0;
//}

////强制类型转换操作符：(类型)
//int main(void)
//{
//	//没有括号时会有警告，加括号强制类型转换，但不建议轻易转换
//	int a = (int) 3.14;
//	printf("%d\n", a);
//	return 0;
//}


//1.10.6关系操作符
//> >= < <= != ==


////1.10.7逻辑操作符：&&逻辑与-并且 ||逻辑或 
//int main()
//{
//	//C语言中0表示假，非0表示真
//	int a = 0;
//	int b = 5;
//	int c = a || b;
//	printf("c=%d\n", c);
//	return 0;
//}


////1.10.8条件操作符（三目操作符）：exp1 ? exp2 : exp3 ;
////1为真，输出2；1为假，输出3
//int main(void)
//{
//	int a = 100;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a: b);
//	printf("%d\n", max);
//	return 0;
//}


//1.10.9逗号表示式：exp1,exp2,exp3,...,expN
//就是逗号可以用于隔开表达式emmmm，真通俗易懂


//1.10.10下标引用、函数调用和结构成员：[] () . ->

////[]
//int main(void)
//{
//	int arr[10] = { 0 };
//	printf("%d\n",arr[4]);//这里的[]就是下标引用操作符
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
//	int sum = Add(a, b);//此处的()即为函数调用操作符
//	printf("%d\n", sum);
//	return 0;
//}


//1.10.11未细讲的操作符：& * . ->





//1.11常用关键字
//需记住，不能和变量名重复
//auto-自动变量，是默认，省略 break-停止循环，也用在switch case语句 case-switch case语句 char-字符型
//const-修饰常变量 continue-继续，用在循环中 default-默认，switch case语句中 do-用在do while循环
//double-双精度浮点数 else-if else语句 enum-枚举 extern-引入外部符号
//float-单精度浮点数 for-循环 goto-goto语句 if-判断语句
//int-整型 long-长整型 register-寄存器（register int） return-返回
//short-短整型 signed-有符号数，是默认，省略 sizeof-计算长度 static-静态的
//struct-结构体关键字 switch-switch case语句 typedef-类型（重）定义 union-联合体
//unsigned-无符号 void-无，空 volatile-难点，但体现c语言段位 while-循环

//register：
//计算机存储数据时
//寄存器 高速缓存 内存 硬盘
//访问速度由大变小，空间由小变大


////1.11.1typedef-类型（重）定义-起别名
//int main(void)
//{
//	typedef unsigned int u_int;
//	unsigned int num1 = 10;
//	u_int num2 = 20;
//	return 0;
//}


////1.11.2static-修饰变量

////修饰局部变量，使其生命周期变长
//void test()
//{
//	static int a = 1;//使a变成静态局部变量
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

////修饰全局变量
////改变其作用域-让静态全局变量只能在自己所在的源文件内部使用
//int main(void)
//{
//	//extern-声明外部符号
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//	return 0;
//}

////修饰函数
////改变了函数的链接属性
////正常情况下函数有外部链接属性，修饰后是内部链接属性
////需要先声明外部函数
//extern int Add(int, int);
//int main(void)
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}





//1.12#define定义常量和宏

////#define定义标识符常量
//#define MAX 100

////#define定义宏-带参数
////常规函数方式
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////宏的方式
//#define Min(X,Y) (X<Y?X:Y)
//int main(void)
//{
//	int a = 10;
//	int b = 20;
//	//函数
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	//宏
//	int min = Min(a, b);
//	printf("min = %d\n", min);
//	return 0;
//}





//1.13指针
//内存中是一个一个的小单元，找到单元需要地址
//32位，64位系统分别有2^32，2^64个编号地址
//若一个单元设置为1bit，只有0.5gb内容有对应地址，此时地址不够分
//若一个单元设置为1byte，就能有4gb内容都对应地址

//指针变量-用来存放地址的变量

//int main(void)
//{
//	int a = 10;//申请空间存放a的值，int整型占用大小4bytes
//	int* p = &a;//申请空间存放指针-a的地址,&a-表示取a地址，32位机器上的指针大小4bytes，64位机器上指针大小8bytes
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p = 20;//*-解引用操作符，解引用地址-通过地址找到其对应空间，也就是指针的使用方法
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