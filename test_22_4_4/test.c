#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

#include<stdio.h>


//1.1什么是C语言
 

//计算机语言（人和计算机交流的语言）：c,c++,java,python
//发展：（是一个从低级语言到高级语言不断发展的过程
//1、二进制语言：根据硬件的正电1，负电零，eg：10100101早期科学家需要查手册
//2、100001-ADD-助记符-汇编语言
//3、B语言
//4、C语言，C++语言-高级语言出现了


//C语言的发展
//C语言-早期不成熟-成熟-流行
//国际标准：ANSI制定c89（c90）标准
//也有c99（c11）标准，但并不流行





////1.2写一个c语言程序
////需要包含一个stdio.h的文件
////std-标准-standard input output
//// eg：#include<stdio.h>
////.c源代码，.h头文件

////主函数-程序入口-main函数有且只有一个
////int是整型的意思
////main前面的int表示main函数调用之后返回一个整型值
////void main()这种写法过时了，尽量不要采用
//int main(void)
//{
//	//main函数的任务在这里完成
//	//在屏幕输出东西用函数-print function-printf-打印函数
//	//库函数-C语言本身提供给我们使用的函数
//	//别人的东西-需要打招呼-最上方注释
//	printf("THX2\nALLGAMEFANS!\n");
//	return 0;
//}





////1.3数据类型：char short int long "long long" float double 
////%d-打印整型
////%c-打印字符
////%f-打印浮点数字
////%p-以地址形式打印
////%x-打印16进制数字（以上的都很少用QAQ）
//int main(void)
//{
//	////char-字符类型
//	////向内存申请空间ch-创建并存储变量
//	//char ch = 'A';
//	////%c-打印字符类型的数据
//	//printf("%c\n", ch);
//
//	////short int-短整型
//	////int-整型
//	//int age = 20;
//	////%d-打印整型十进制数据
//	//printf("%d\n", age);
//
//	////long-长整型
//	//long num = 100;
//	//printf("%d\n", num);
//
//	//float f = 5.0;
//	//printf("%f\n", f);
//
//	//double d = 3.14;
//	//printf("%lf\n", d);
//
//  ////计算机中的单位：bit-8-byte-1024-kb-1024-mb-1024-gb......
//	////不同类型占用空间不同-1，2，4，4/8（标准规定sizeof(long)>=sizeof(int)即可），8，4，8（bytes）
//	//printf("%lld\n", sizeof(char));
//	//printf("%lld\n", sizeof(short));
//	//printf("%lld\n", sizeof(int));
//	//printf("%lld\n", sizeof(long));
//	//printf("%lld\n", sizeof(long long));
//	//printf("%lld\n", sizeof(float));
//	//printf("%lld\n", sizeof(double));
//	return 0;
//}






//1.4变量、常量

////1.4.1定义变量的方法
//int main(void)
//{
//  //char "w";
//	//age
//	//20
//	//向内存申请2byte=16bit，用来存放“20”这个数
//	short age = 20;
//	//向内存申请4byte存放小数
//	//默认95.6是double型，若不加f会警告截断
//	float weight = 95.6f;
//	return 0;
//}


//1.4.2变量分类：局部变量、全局变量
////全局变量-定义在代码块（{}）之外的变量
//int num2 = 20;
//int main(void)
//{
//	//局部变量-定义在代码块（{}）内部的变量
//	int num1 = 10;
//	return 0;
//}

////局部变量和全局变量名字建议不要相同，容易误会，产生bug
////当相同时，局部变量优先
//int a = 100;
//int main(void)
//{
//	int a = 10;
//	printf("%d\n", a);
//	return 0;
//}

////全局变量能够printf
//int a = 10;
//int main(void)
//{
//	{
//		//此时a在局部，为未声明标识符，无法printf
//		int a = 10;
//	}
//	printf("%d\n", a);
//	return 0;
//}


////1.4.3变量使用
//int main(void)
//{
//	//计算两个数的和
//	int num1 = 0;
//	int num2 = 0;
//	//输入数据-使用输入函数scanf
//	//“&”取地址符号
//	scanf("%d%d", &num1, &num2);
//	//C语言语法规定，变量需要定义在当前编码块最前面
//	//error：int sum = 0;（但为啥我没出现？）
//	int sum = 0;
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}


//1.4.4变量的作用域和生命周期
//int main(void)
//{
//	//局部变量的位置决定其作用域
//	int num = 0;
//	printf("num=%d\n", num);
//	return 0;
//}

//全局变量作用域在整个工程
//int global = 2022;
//void test()
//{
//	printf("test()--%d\n", global);
//}
//int main(void)
//{
//	//调用函数证明全局变量在外面也可以用
//	test();
//	//证明全局变量在里面能用
//	printf("%d\n", global);
//	return 0;
//}

////其他源文件中的全局变量也能在这里使用
//int main(void)
//{
//	//需要extern声明一下外部符号
//	extern int global;
//	printf("%d\n", global);
//	return 0;
//}

////生命周期
//int main(void)
//{
//	//括号“{}”为局部变量生命周期
//	{
//		int a = 10;
//		printf("a=%d\n", a);
//	}
//	//printf("a=%d\n", a);error-超出了生命周期
//	return 0;
//}