////利用函数指针数组创建计算器
//#include <stdio.h>
//#include <string.h>
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int prt(int x, int y)   //乘法
//{
//	return x * y;
//}
//int mul(int x, int y)   //除法
//{
//	return x / y;
//}
//void text()
//{
//	printf("***************************************\n");
//	printf("*****1.加法                 2.减法*****\n");
//	printf("*****3.乘法                 4.除法*****\n");
//	printf("************   0.退出   ***************\n");
//}
//int main(void)
//{
//	int x = 0;
//	int y = 0;
//	int input;
//	
//	int (*p[4])(int, int) = { add,sub,prt,mul };
//	do
//	{
//		text();
//		printf("-->请选择:");
//		scanf_s("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//
//			text();
//			printf("-->请选择:");
//			scanf_s("%d", &input);
//			printf("请输入两值:");
//			scanf_s("%d%d", &x, &y);
//			printf("%d  %d=%d", x, y, p[input - 1](x, y));
//		}
//		else
//		if (input == 0)
//		{
//			printf("退出.");
//		}
//		else
//		{
//			printf("输入错误;");
//		}
//	} while (input);
//	
//	
//}


//回调函数
#include <stdio.h>
void print(char* s)
{
	printf("hehe:%s", s);
}
void text(void* (p)(char*))
{
	p("bite");
}
int main(void)
{
	text(print);
		return 0;
}
//进阶  :计算器
