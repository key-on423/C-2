#include <stdio.h>


//int main()
//{
//	printf("请您输入一串英文，我将把!转换为!! ,  .转换为!,#结束语句\n");
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
//	printf("\n转换了%d次", count);
//	return 0;
//}


//6.编写程序读取输入，读到#停止，报告ei出现的次数

//int main()
//{
//	char ch;
//	int count = 0;
//	printf("请输入一段包含ei的英文，ei的次数不限，#代表结束\n");
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
//	printf("\n您输入的英文里有%d个ei", count);
//	return 0;
//}

//7.编写一个程序，提示用户输入一周工作的小时数，然后打印工资总额，税金和净收入。做如下假设
//a. 基本工资 = 10.00 美元/小时 
//b. 加班（超过40小时）=1.5 倍时间
//c. 税率: 前300美元为15%  续150美元为20% 余下的为25%
//用#define定义符号常量。 不用在意是否符合当前的税法。

//#define jiben 25
//#define jiaban 1.5
//#define sq 0.15
//#define sz 0.20
//#define yx 0.25
//
//int main()
//{
//	double hour = 0.0;
//	printf("请输你一周工作的时间:");
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
//	printf("税前你总共赚了%.1lf美元税后你的净收入为%.1lf美元税金为%.1lf美元\n", allmoney, zhuanmoney, shuimoney);
//	printf("Good job! 这是个好工作加油干\n");
//	return 0;
//}

//8.修改练习7的假设a，让程序可以给出一个供选择的工资等级菜单。使用switch完成工资等级选择。运行程序后，显示菜单；
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
			default: printf("输入错误请重新输入\n");
				continue;
			}
			printf("请输你一周工作的时间:");
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
		printf("税前你总共赚了%.1lf美元税后你的净收入为%.1lf美元税金为%.1lf美元\n", allmoney, zhuanmoney, shuimoney);
		printf("Good job! 这是个好工作加油干\n\n");
	}
	
	return 0;
}