#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//while语句
/*while (表达式)
	循环语句;
*/

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		//在while循环中，continue跳过本次循环continue后的代码，直接去判断部分判断是否进行下一次循环
//		printf("%d\n", i);
//		i++;
//
//		//在while循环中，break用于永久的终止循环
//		/*if (i == 5)
//			break;
//
//		printf("%d\n", i);
//		i++;*/
//	}
//	return 0;
//}



////getchar 与 putchar
////EOF - end of file -文件结束标志
//int main()
//{
//	int ch = getchar();
//	//printf("%c\n", ch);
//	putchar(ch);//输出一个字符
//	return 0;
//}
//
//int main()
//{
//	int ch = 0;
//	//ctrl + z = getchar读取结束
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	//
//	char password[20] = { 0 };
//	printf("请输入密码：>");
//	scanf("%s", password);
//	//回车包括\n和触发程序执行
//	printf("请确认密码(Y/N):>");
//	//清理缓冲区
//	//getchar();//处理'\n'
//	
//	//清理缓冲区的中多个字符
//	int tmp = 0;
//	while ((tmp = getchar() )!= '\n')
//	{
//		;
//	}
//	//getchar scanf 输入函数从缓冲区提取数据
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	return 0;
//}


//只打印数字字符
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch > '9')
			continue;

		putchar(ch);
	}
	return 0;
}

