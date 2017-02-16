#include<stdio.h>//违约金计算器v1.2 bug版 
void jisuan(float n);//V1.3 增加单利率法，复利率法选择（正在施工）


int main(void)
{
	char c,y;
star :
	printf("选择违约金赔偿比例：\na：百分之     b:千分之     c：万分之\n");
	scanf("%c", &c);
	getchar();
	switch (c)
	{
	case 'a':jisuan(0.01);
		break;
	case 'b':jisuan(0.001);
		break;
	case 'c':jisuan(0.0001);
		break;
	default:printf("输入错误！\n");
		break;
	}
	printf("是否继续计算？\n");
	getchar();
	if (y=getchar() == 'y')
	{
		goto star;
	}
	else
	{
		printf("Good bye!\n");
	}
	return 0;
}
void jisuan(float n)
{
	int num1 = 0, num2 = 0, num3 = 0;
	float num4 = 0;
	printf("请输入违约金单位数字：");
	scanf("%d", &num1);
	printf("请输入期数:");
	scanf("%d", &num2);
	printf("请输入本金：");
	scanf("%d", &num3);
	num4 = num3*num2*num1*n;
	printf("违约金为%f\n", num4);
}
