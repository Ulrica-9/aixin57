////���ú���ָ�����鴴��������
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
//int prt(int x, int y)   //�˷�
//{
//	return x * y;
//}
//int mul(int x, int y)   //����
//{
//	return x / y;
//}
//void text()
//{
//	printf("***************************************\n");
//	printf("*****1.�ӷ�                 2.����*****\n");
//	printf("*****3.�˷�                 4.����*****\n");
//	printf("************   0.�˳�   ***************\n");
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
//		printf("-->��ѡ��:");
//		scanf_s("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//
//			text();
//			printf("-->��ѡ��:");
//			scanf_s("%d", &input);
//			printf("��������ֵ:");
//			scanf_s("%d%d", &x, &y);
//			printf("%d  %d=%d", x, y, p[input - 1](x, y));
//		}
//		else
//		if (input == 0)
//		{
//			printf("�˳�.");
//		}
//		else
//		{
//			printf("�������;");
//		}
//	} while (input);
//	
//	
//}


//�ص�����
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
//����  :������
