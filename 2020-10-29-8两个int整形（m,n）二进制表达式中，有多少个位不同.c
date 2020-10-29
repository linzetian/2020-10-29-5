//两个int整形（m,n）二进制表达式中，有多少个位不同
#include<stdio.h>
int count_binary(int m, int n)
{
	int tem= m^n;
	int count = 0;
	while (tem)
	{
		tem = tem & (tem - 1);
		count++;
	}
	return count;
}
int main()
{
	int m = 0;
	int n = 0;
	printf("请输入m和n：");
	scanf("%d %d", &m, &n);
	int ret = count_binary(m, n);
	printf("ret=%d\n", ret);
	return 0;
}