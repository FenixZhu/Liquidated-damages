#include<stdio.h>              //违约金计算器 V1.3 正式版 ： 增加单利率法，复利率法选择;将源代码进行函数化！
#include<math.h>             //BUG已经修复！通过while ((c = getchar()) == '\n'); 以及while ((y = getchar()) == '\n');处理空字符。
void danlilv(void);          
void fulilv(void); 
void djisuan(float n);
void fjisuan(float n);
void jixu(void);
void xuanze(void);
char  c, y ,x;                      //定义了全局变量

int main(void)
{
	printf("/**********欢迎使用违约金计算器**********/\n");
	printf("/*************作者：Phoenix*************/\n");
	xuanze();

	jixu();

	return 0;
}

void danlilv(void)
{
	printf("选择违约金赔偿比例：\nA：百分之     B:千分之     C：万分之\n");
	while ((c = getchar()) == '\n');                //处理空字符！(c = getchar()) == '\n'与c = getchar() == '\n'不同，望注意。
	if (c == 'a' || c == 'A')                                 //支持不分大小写，用if代替switch实现
		djisuan(0.01);
	else if (c == 'b' || c == 'B')
		djisuan(0.001);
	else if (c == 'c' || c == 'C')
		djisuan(0.001);
}
void fulilv(void)
{
	printf("选择违约金赔偿比例：\nA：百分之     B:千分之     C：万分之\n");
	while ((c = getchar()) == '\n');                //处理空字符！(c = getchar()) == '\n'与c = getchar() == '\n'不同，望注意。
	if (c == 'a' || c == 'A')                                 //支持不分大小写，用if代替switch实现
		fjisuan(0.01);
	else if (c == 'b' || c == 'B')
		fjisuan(0.001);
	else if (c == 'c' || c == 'C')
		fjisuan(0.001);
}

void djisuan(float n)                                   //单利率计算函数
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
void fjisuan(float n)                                   //单利率计算函数
{
	int num1 = 0, num2 = 0, num3 = 0;
	float num4 = 0;
	printf("请输入违约金单位数字：");
	scanf("%d", &num1);
	printf("请输入期数:");
	scanf("%d", &num2);
	printf("请输入本金：");
	scanf("%d", &num3);
	num4 = num3*pow((1 + num1*n),num2)-num3;
	printf("违约金为%f\n", num4);
}
void jixu(void)
{
	printf("是否继续计算？确定请输入y，否则请输入n\n");
	while ((y = getchar()) == '\n');
	if (y == 'y' || y == 'Y')
		main();                                               //应该避免使用goto语句，改为调用main()函数本身！
	else if (y == 'n' || y == 'N')
		printf("Good bye!\n");
	else
		printf("错误！请重新输入：");
}
void xuanze(void)
{
	printf("请选择利率计算法：A:单利率法     B:复利率法\n ");
	while ((x = getchar()) == '\n');
	if (x == 'a' || x == 'A')
		danlilv();
	else if (x == 'b' || x == 'B')
		fulilv();
	else
		printf("错误，请重新输入！");
}
