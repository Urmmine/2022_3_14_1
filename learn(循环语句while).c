#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//while���
/*while (���ʽ)
	ѭ�����;
*/

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		//��whileѭ���У�continue��������ѭ��continue��Ĵ��룬ֱ��ȥ�жϲ����ж��Ƿ������һ��ѭ��
//		printf("%d\n", i);
//		i++;
//
//		//��whileѭ���У�break�������õ���ֹѭ��
//		/*if (i == 5)
//			break;
//
//		printf("%d\n", i);
//		i++;*/
//	}
//	return 0;
//}



////getchar �� putchar
////EOF - end of file -�ļ�������־
//int main()
//{
//	int ch = getchar();
//	//printf("%c\n", ch);
//	putchar(ch);//���һ���ַ�
//	return 0;
//}
//
//int main()
//{
//	int ch = 0;
//	//ctrl + z = getchar��ȡ����
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
//	printf("���������룺>");
//	scanf("%s", password);
//	//�س�����\n�ʹ�������ִ��
//	printf("��ȷ������(Y/N):>");
//	//��������
//	//getchar();//����'\n'
//	
//	//�����������ж���ַ�
//	int tmp = 0;
//	while ((tmp = getchar() )!= '\n')
//	{
//		;
//	}
//	//getchar scanf ���뺯���ӻ�������ȡ����
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//	return 0;
//}


//ֻ��ӡ�����ַ�
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

