#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

#include<stdio.h>
#include<string.h>


//1.13指针

//int main(void)
//{
//	int a = 10;//申请空间存放a
//	int* p = &a;//申请空间存放指针变量p-a地址
//	//int*是一个整体，*代表p是一个指针变量，int代表指针指向的内容是整型
//	printf("%p\n", &a);//打印a地址
//	printf("%p\n", p);//打印指针内容
//	printf("%d\n", a);//打印a的值
//	*p = 30;//*解引用操作符-通过指针找到地址对应内容，并改变
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





//1.14结构体
//自己创造出来的类型，目的是描述复杂对象
//人-名字+身高+年龄+身份证号+。。。
//书-书名+作者+出版社+定价+书号。。。

////创造一个结构体类型
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
//	//利用结构体类型创建一个该类型的结构体变量
//	struct Book b1 = { "C语言程序设计","BUPT","BUPT",55};
//	printf("书名：%s\n", b1.name);
//	printf("作者：%s\n", b1.author);
//	printf("出版社：%s\n", b1.publishing);
//	printf("价格：%d元\n", b1.price);
//
//	//更改结构体中的内容，price是变量，可以直接更改；
//	//而name是字符，用strcpy-string copy-字符串更改
//	b1.price = 15;
//	strcpy(b1.name, "c++");
//	printf("修改后的价格：%d元\n", b1.price);
//	printf("修改后的名字：%s\n", b1.name);
//	//指针的普通表示
//	struct Book* pb = &b1;
//	printf("%s\n", (*pb).name);
//	printf("%d\n", (*pb).price);
//
//	//指针的箭头表示
//	//使用.操作符：结构体变量.成员
//	//使用->操作符：结构体指针->成员
//	printf("箭头%s\n", pb->name);
//	printf("箭头%d\n", pb->price);
//	return 0;
//}