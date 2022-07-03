#include<stdio.h>
int main()
{
	int a,b;
	printf("请输入两个数\n");
	scanf("%d%d",&a,&b);
	a=a^b;
	b=a^b;
	a=b^a;
	printf("a=%d,b=%d\n",a,b);
	return 0;
}
