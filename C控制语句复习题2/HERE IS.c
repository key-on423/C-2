#include <stdio.h>


//int main()
//{
//	printf("��������һ��Ӣ�ģ��ҽ���!ת��Ϊ!! ,  .ת��Ϊ!,#�������\n");
//	char ch;
//	int count = 0;
//	while ((ch = getchar()) != '#')
//	{
//		switch(ch)
//		{
//
//          case '!':
//			  printf("!!");
//			  count++;
//			  break;
//		  case '.':
//			  printf("!");
//			  count++;
//			  break;
//		  default:
//			  printf("%c", ch);
//		}
//	}
//	printf("\nת����%d��", count);
//	return 0;
//}


//6.��д�����ȡ���룬����#ֹͣ������ei���ֵĴ���

//int main()
//{
//	char ch;
//	int count = 0;
//	printf("������һ�ΰ���ei��Ӣ�ģ�ei�Ĵ������ޣ�#�������\n");
//	while ((ch = getchar()) != '#')
//	{
//		if (ch == 'e')
//		{
//			printf("%c", ch);
//			if ((ch = getchar()) == 'i')
//			{
//				printf("%c", ch);
//				count++;
//			}
//			else
//				putchar(ch);
//		}
//		else
//			putchar(ch);
//	}
//	printf("\n�������Ӣ������%d��ei", count);
//	return 0;
//}

//7.��дһ��������ʾ�û�����һ�ܹ�����Сʱ����Ȼ���ӡ�����ܶ˰��;����롣�����¼���
//a. �������� = 10.00 ��Ԫ/Сʱ 
//b. �Ӱࣨ����40Сʱ��=1.5 ��ʱ��
//c. ˰��: ǰ300��ԪΪ15%  ��150��ԪΪ20% ���µ�Ϊ25%
//��#define������ų����� ���������Ƿ���ϵ�ǰ��˰����

//#define jiben 25
//#define jiaban 1.5
//#define sq 0.15
//#define sz 0.20
//#define yx 0.25
//
//int main()
//{
//	double hour = 0.0;
//	printf("������һ�ܹ�����ʱ��:");
//	scanf_s("%lf", &hour);
//	double allmoney, shuimoney, zhuanmoney;
//	allmoney = shuimoney = zhuanmoney=0;
//	if (hour >0)
//	{
//		if (hour <= 40)
//			allmoney = hour * jiben;
//		else 
//			allmoney = 40 * jiben + 1.5 * (hour - 40) * jiben;
//		if (allmoney > 300 && allmoney <= 450)
//			shuimoney = (allmoney - 300) * 0.2 + 300 * 0.15;
//		else  
//			shuimoney = (allmoney - 450) * 0.25 + 150 * 0.20 + 300 * 0.15;
//		zhuanmoney = allmoney - shuimoney;
//	}
//	printf("˰ǰ���ܹ�׬��%.1lf��Ԫ˰����ľ�����Ϊ%.1lf��Ԫ˰��Ϊ%.1lf��Ԫ\n", allmoney, zhuanmoney, shuimoney);
//	printf("Good job! ���Ǹ��ù������͸�\n");
//	return 0;
//}

//8.�޸���ϰ7�ļ���a���ó�����Ը���һ����ѡ��Ĺ��ʵȼ��˵���ʹ��switch��ɹ��ʵȼ�ѡ�����г������ʾ�˵���
#define jiaban 1.5
#define sq 0.15
#define sz 0.20
#define yx 0.25
int main()
{
	double jiben = 10.0;
	int xuanze;
	double hour = 0.0;
	double allmoney, shuimoney, zhuanmoney;
	allmoney = shuimoney = zhuanmoney=0;
	while (1)
	{
		printf("*****************************************************************\n\n");
		printf("Enter the number corresponding to the desired pay rate or action:\n");
		printf("1) $8.75 /hr                           2) $9.33 /hr                \n");
		printf("3) $10.00/hr                           4) $11.20/hr                \n");
		printf("5) quit                                                            \n");
		printf("*****************************************************************\n");
		scanf_s("%d", &xuanze);
			switch (xuanze)
			{
			case 1:
				jiben = 8.75;
				break;
			case 2:
				jiben = 9.33;
				break;
			case 3:
				jiben = 10.0;
				break;
			case 4:
				jiben = 11.20;
				break;
			case 5:
				printf("Done!\n");
				return 0;
			default: printf("�����������������\n");
				continue;
			}
			printf("������һ�ܹ�����ʱ��:");
			scanf_s("%lf", &hour);
		if (hour > 0)
		{
			if (hour <= 40)
				allmoney = hour * jiben;
			else
				allmoney = 40 * jiben + 1.5 * (hour - 40) * jiben;
			if (allmoney > 300 && allmoney <= 450)
				shuimoney = (allmoney - 300) * 0.2 + 300 * 0.15;
			else
				shuimoney = (allmoney - 450) * 0.25 + 150 * 0.20 + 300 * 0.15;
			zhuanmoney = allmoney - shuimoney;
		}
		printf("˰ǰ���ܹ�׬��%.1lf��Ԫ˰����ľ�����Ϊ%.1lf��Ԫ˰��Ϊ%.1lf��Ԫ\n", allmoney, zhuanmoney, shuimoney);
		printf("Good job! ���Ǹ��ù������͸�\n\n");
	}
	
	return 0;
}