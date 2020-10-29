//两个int整形（m,n）二进制表达式中，有多少个位不同
#include<stdio.h>
int count_binary(int m, int n)
{
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if (((m ^ n) >> i)&1 == 1)//这里容易出错，小心点
			count++;
	}
	return count;
}
int main()
{
	int m = 0;
	int n = 0;
	printf("请输入m和n：");
	scanf("%d %d",&m,&n);
	int ret = count_binary(m, n);
	printf("ret=%d\n",ret);
	return 0;
}