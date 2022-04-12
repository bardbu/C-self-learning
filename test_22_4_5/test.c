#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

#include<stdio.h>
#include<string.h>


////1.4.3变量使用（小插曲）
//int main(void)
//{
//	int num1 = 0;
//	int num2 = 0;
//	//scanf strcpy strlen strcat被vc认为是不安全的，需要最上方两行的代码，否则出现c4996，c6031
//	scanf("%d%d", &num1, &num2);
//	int sum = 0;
//	sum = num1 + num2;
//	printf("sum=%d", sum);
//	return 0;
//}


//1.4.5常量

// //字面常量以及const修饰的常变量
//int main(void)
//{
//	////字面常量：直接写出3，100
//	////const-常属性
//	////num此时为const修饰的常变量
//	//const int num = 4;
//	//printf("%d\n", num);
//	////若有const修饰，下面语句无法对其重新赋值
//	////num = 8;
//	////printf("%d\n", num);
//
//	////n是变量，const修饰后具有常属性，所以其是常变量
//	//const int n = 10;
//	//int arr[n] = { 0 };
//	return 0;
//}

////define定义的标识符常量
//#define MAX 10
//int main(void)
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}

////枚举常量-一一列举
////eg：性别：男，女，保密
////三原色：红黄蓝
////星期:1234567
////枚举关键字-enum
//enum SEX
//{
//	//枚举常量-不可更改-定义的新变量可以改
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main(void)
//{
//	//enum SEX m = FEMALE;
//	printf("%d\n", MALE);//默认0
//	printf("%d\n", FEMALE);//默认1
//	printf("%d\n", SECRET);//默认2
//	return 0;
//}





//1.5字符串、转义字符、注释

//1.5.1字符串

////"abcdef";
////"THX2 ALLGAMEFANS!"
//int main(void)
//{
//	//使用字符数组表示字符串
//	//"abc"-'a','b','c','\0'，默认就有'\0'结束，隐藏在字符串末尾
//	//'\0'-字符串的结束标志
//	char arr1[] = "abc";
//	//需要手动输入'\0'作为结束标志
//	char arr2[] = { 'a','b','c','\0' };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	//数据在计算机中以二进制存放,每个字符都有编号
//	//ASCII编码：a-97,A-65（ASCII码值）
//	return 0;
//}

////'\0'的重要性
//int main(void)
//{
//	char arr1[] = "abc";
//	//'\0'和0一样,均为ASCII0，但是要注意'0'这个是字符0，对应ASCII48，不能用
//	char arr2[] = { 'a','b','c',0};
//	//strlen-string length-计算字符串长度
//	printf("%lld\n", strlen(arr1));
//	//若不手动添加'\0'，因为随机数，长度会是随机的，直到某一位置随机值为'\0'结束
//	printf("%lld\n", strlen(arr2));
//	return 0;
//}


//1.5.2转义字符-通常使用\来转义

//int main(void)
//{
//	//\n-一个转义字符
//	printf("abc\n");
//	return 0;
//}

//int main(void)
//{
//	//t是一个正常字符，被\转义为，\t-水平制表符，打印时会出现空格
//	//使用\再次转义\t原来的意思，\\t就能正常输出为字符\t
//	printf("c:\\test\\32\\test.c");
//	//老版本？？）为三字母词，会输出为】，需要用\?\?)来转义
//	return 0;
//}

//int main(void)
//{
//	//使用\'转义'
//	printf("%c\n",'\'');
//	return 0;
//}

//int main(void)
//{
//	//若出现\ddd转义字符，ddd-一到三个八进制数字，eg：出现\32
//	//\32-两个八进制字符-转换为十进制中的数字26-对应的ASCII码值便为26-ASCII表中代表的字符-箭头
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	return 0;
//}

//int main(void)
//{
//	//出现\xdd转义字符，dd-两个十六进制数字
//	printf("%c\n",'\x61');
//	return 0;
//}


//1.5.3注释
//解释难理解的东西





////1.6选择语句
//int main(void)
//{
//	int input = 0;
//	printf("加入BUPT\n");
//	printf("你要好好学习吗?(1/0)>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("future\n");
//	else
//		printf("卖红薯\n");
//	return 0;
//}





////1.7循环语句
////while语句
////for语句
////do...while循环
//int main(void)
//{
//	int line = 0;
//	printf("加入BUPT\n");
//	while (line<20000)
//	{
//		line++;
//		printf("敲一行代码:%d\n",line);
//	}
//	if(line>=20000)
//	    printf("future\n");
//	return 0;
//}





////1.8函数
////库函数
////自定义函数
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





////1.9数组-一组相同类型的集合
//int main(void)
//{
//	//int a = 1;
//	//int b = 2;
//	//int c = 3;
//	//定义一个存放十个整数的数组
//    //在内存里的连续空间存放，且这些元素的下标默认从0开始，分别为0，1，2，3，4，5，6，7，8，9
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//  //也可写为int arr[]={1,2,3,4,5,6,7,8,9,10},数组如果初始化，可以不指定数组大小，初始化后元素个数已确定
//	//int char ch[20];
//  //int float arr2[5];
//	//用下标的形式可访问元素-	printf("%d\n", arr[4]);
//	int i = 0;
//	while(i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	return 0;
//}





//1.10操作符

////1.10.1算术操作符：+ - * / %
////%取模，就是余数emmmm
//int main(void)
//{
//	int a = 5 % 2;
//	printf("%d\n", a);
//	return 0;
//}


////1.10.2移位操作符：<<-左移 >>-右移
//int main(void)
//{
//	int a = 1;
//	//整型1占4byte-32bit
//	//00000000 00000000 00000000 00000001
//	//移位后，最左边丢弃，最右边空白补0
//	int b = a << 2;
//	printf("%d\n", b);
//	//移位之后本身不变
//	printf("%d\n", a);
//	return 0;
//}


////1.10.3（二进制）位操作符：& ^ |
//int main(void)
//{
//	//&按位与（且）:一假均假
//    //|按位或：一真均真
//    //^按位异或：同0异1
//	int a = 3;//011
//	int b = 5;//101
//	int c = a ^ b;
//	printf("%d\n", c);
//	return 0;
//}


////1.10.4赋值操作符: = += -= *= /= &= ^= |= >>= <<=
//int main(void)
//{
//	//=赋值
//	//==判断相等
//	//+=加后赋值给自己
//	//-=减后赋值给自己
//	//其他同理，均为复合赋值符：+= -= *= /= %=......
//	int a = 10;
//	a += 10;
//	return 0;
//}


//1.10.5单目操作符：! - + & sizeof ~ -- ++ 星号 (类型）
//还有双目操作符，三目操作符，估计是后面具体讲

//int main(void)
//{
//	//int a = 10;
//	//int b = 20;
//	////此时+即为双目操作符
//	//a + b;
//	
//	////C语言中0-假，非0-真
//	////!单目操作符，逻辑反操作，真变假，假变真
//	// int a = 1;
//	//printf("%d\n", a);
//	//printf("%d\n", !a);
//
//	////+ - 单目操作符，表示正负值
//	//int a = -2;
//	//int b = -a;
//	//int c = +3;
//
//	//int a = 10;
//	////sizeof计算的是变量/类型所占空间大小，单位是字节
//	////sizeof返回的是一个8bytes无符号整型，应用%lld占位符
//	//printf("%lld\n", sizeof(a));
//	//printf("%lld\n", sizeof(int));
//	//printf("%lld\n", sizeof a);
//	////sizeof计算a可以省略括号，计算int不行
//	////error:printf("%lld\n", sizeof int);
//
//	////十个整型元素的数组
//	//int arr[10] = { 0 };
//	//int sz = 0;
//	////10*sizeof(int)=40
//	//printf("%lld\n", sizeof(arr));
//	////计算数组元素个数，个数=数组总大小/每个元素的大小
//	//sz = sizeof(arr) / sizeof(arr[0]);
//	//printf("sz=%d\n", sz);
//	return 0;
//}